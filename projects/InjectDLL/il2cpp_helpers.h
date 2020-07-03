#pragma once

#include <string>

namespace il2cpp
{
    struct Il2CppMethodInfo;
    // TODO: Add virtual method calls here.
    // TODO: Add resolver for generics.

    namespace untyped
    {
        Il2CppObject* invoke(Il2CppObject* obj, const char* method, int param_count, void** params);
        Il2CppObject* invoke_virtual(Il2CppObject* obj, Il2CppClass* base, const char* method, int param_count, void** params);

        Il2CppObject* create_object(const char* namezpace, const char* name);
        Il2CppObject* create_object(Il2CppClass* klass);
        Il2CppClass* get_class(const char* namezpace, const char* name);

        bool instance_of(Il2CppClass* klass, const char* namezpace, const char* name);
        int implements_interface(Il2CppClass* klass, const char* namezpace, const char* name);

        bool instance_of(Il2CppClass* klass, Il2CppClass* parent);
        int implements_interface(Il2CppClass* klass, Il2CppClass* iklass);
    }

    bool instance_of(void* obj, const char* namezpace, const char* name);
    bool implements_interface(void* obj, const char* namezpace, const char* name);

    // Templates

    template<typename TObject>
    TObject* safe_il2cpp_cast(void* obj, const char* namezpace, const char* name)
    {
        if (!instance_of(obj, namezpace, name))
            return nullptr;

        return reinterpret_cast<TObject*>(obj);
    }

    template<class Return, class... Args>
    Return invoke(void* obj, const char* method, Args...)
    {
        return reinterpret_cast<Return>(untyped::invoke(reinterpret_cast<Il2CppObject*>(obj), method, sizeof...(Args), Args));
    }

    template<class Return, class... Args>
    Return invoke_virtual(void* obj, void* base, const char* method, Args...)
    {
        return reinterpret_cast<Return>(untyped::invoke_virtual(reinterpret_cast<Il2CppObject*>(obj), reinterpret_cast<Il2CppClass*>(base), method, sizeof...(Args), Args));
    }

    template<typename T>
    T* create_object_t(const char* namezpace, const char* name)
    {
        return reinterpret_cast<T*>(untyped::create_object(name, namezpace));
    }
}
