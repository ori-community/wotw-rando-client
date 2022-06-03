#pragma once

template <typename T>
struct DirtyValue {
public:
    DirtyValue(T v) {
        _value = v;
        dirty = true;
    }

    T& operator=(T&& other) {
        if (_value == other)
            return _value;

        dirty = true;
        _value = std::move(other);
        return _value;
    }

    T& operator=(const T& other) {
        if (_value == other)
            return _value;

        dirty = true;
        _value = other;
        return _value;
    }

    T& operator*() { return _value; }

    void set_dirty(bool value = false) { dirty = value; }
    bool is_dirty() { return dirty; }
    T& value() { return _value; }

private:
    bool dirty = true;
    T _value;
};
