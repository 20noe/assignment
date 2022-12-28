

var num = 13;

var isPrime = true;

if(num<=1)
{
    console.log('neither prime nor Not prime');
    return;
}



for(let i = 2; i<= num/2 ; i++)
{
    if(num%i==0)
    {
        isPrime = false;
        break;
    }
}

console.log(isPrime);