using RandomizerManaged.Memory;

namespace RandomizerManaged {
  public interface IValue<T> {
    T Value();
  }

  public class ConstantValue<T> : IValue<T> {
    private T value;
    public ConstantValue(T value) => this.value = value;
    public T Value() {
      return value;
    }
  }

  public class FloatPointerValue : IValue<float> {
    private UberId id;
    public FloatPointerValue(UberId id) => this.id = id;
    public float Value() {
      return id.GetValue().Float;
    }
  }

  public class IntPointerValue : IValue<int> {
    private UberId id;
    public IntPointerValue(UberId id) => this.id = id;
    public int Value() {
      return id.GetValue().Int;
    }
  }

  public class BytePointerValue : IValue<byte> {
    private UberId id;
    public BytePointerValue(UberId id) => this.id = id;
    public byte Value() {
      return id.GetValue().Byte;
    }
  }

  public class BoolPointerValue : IValue<bool> {
    private UberId id;
    public BoolPointerValue(UberId id) => this.id = id;
    public bool Value() {
      return id.GetValue().Bool;
    }
  }

  public class FloatRandomValue : IValue<float> {
    private IValue<float> min;
    private IValue<float> max;
    public FloatRandomValue(IValue<float> min, IValue<float> max) {
      this.min = min;
      this.max = max;
    }
    public float Value() {
      var actualMin = min.Value();
      var actualMax = max.Value();
      var difference = actualMax - actualMin;
      return (float)(Randomizer.R.NextDouble() * difference + actualMin);
    }
  }

  public class IntRandomValue : IValue<int> {
    private IValue<int> min;
    private IValue<int> max;
    public IntRandomValue(IValue<int> min, IValue<int> max) {
      this.min = min;
      this.max = max;
    }
    public int Value() {
      var actualMin = min.Value();
      var actualMax = max.Value();
      return Randomizer.R.Next(actualMin, actualMax);
    }
  }

  public class ByteRandomValue : IValue<byte> {
    private IValue<byte> min;
    private IValue<byte> max;
    public ByteRandomValue(IValue<byte> min, IValue<byte> max) {
      this.min = min;
      this.max = max;
    }
    public byte Value() {
      var actualMin = min.Value();
      var actualMax = max.Value();
      return (byte)Randomizer.R.Next(actualMin, actualMax);
    }
  }

  public class BoolRandomValue : IValue<bool> {
    public bool Value() {
      return Randomizer.R.Next(0, 1) == 1;
    }
  }
}
