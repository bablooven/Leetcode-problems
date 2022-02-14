//Program to understand the properties of an array in JS and the operations which can be performed on it.  
class Myarray {
    constructor() {
        this.length = 0;
        this.data = {};
    }

    get(index) {
        return this.data[index];
    }
    push(item) {
        this.data[this.length] = item;
        this.length++;

        return this.length;
    }

    pop(){
      const lastItem = this.data[this.length-1];
      delete this.data[this.length-1];
      this.length--;
      return lastItem;
    }
    
    deleteItem(item)
    {
      var flag =false;
      for(let i=0; i< this.length; i++)
      {
        if(this.data[i]===item)
        {
          this.deleteIndex(i);
          flag=true;
        }
      }

      if(flag==false)
      {
        console.log(`Could not find the item: '${item}' in the array...`);
      }
      return flag;
    }

    deleteIndex(index)
    {
      const itemAtIndex = this.data[index];
      this.shiftItems(index);
      return itemAtIndex;
    }

    shiftItems(index)
    {
      for(let i = index;i<this.length-1;i++)
      {
        this.data[i] = this.data[i+1];
      }
      this.length--;
    }
}

const newArray = new Myarray();

newArray.push('hi');
//newArray.push(',');
newArray.push('are');
newArray.push('you');
newArray.push('doing');
newArray.push('friend');
newArray.push('!');
//newArray.pop();

newArray.deleteItem(',');
console.log(newArray);