let counter = 0;

// Function to increment counter
function count() {
  counter += 1;
}

// Call count() 3 times
count();
count();
count();
console.log(counter); //it will print 3 as it's a global

