#pragma once

#include <string>
#include <vector>

namespace il2cpp
{
    // TODO: Add virtual method calls here.
    // TODO: Add resolver for generics.

    namespace unity
    {
        void destroy_object(void* object);
        app::GameObject* get_game_object(void* component);
        app::Component* add_component_untyped(app::GameObject* game_object, const char* full_name);
        std::string get_object_name(void* object);

        template<typename Return = app::Component>
        Return* add_component(app::GameObject* game_object, const char* full_name)
        {
            return reinterpret_cast<Return*>(add_component_untyped(game_object, full_name));
        }
    }

    namespace untyped
    {
        Il2CppObject* create_object(const char* namezpace, const char* name);
        Il2CppObject* create_object(Il2CppClass* klass);

        bool instance_of(Il2CppClass* klass, const char* namezpace, const char* name);
        int implements_interface(Il2CppClass* klass, const char* namezpace, const char* name);

        bool instance_of(Il2CppClass* klass, Il2CppClass* parent);
        int implements_interface(Il2CppClass* klass, Il2CppClass* iklass);
    }

    Il2CppString* string_new(const char* str);
    Il2CppString* string_new(const char* str, uint32_t len);

    Il2CppObject* invoke_v(void* obj, const char* method, std::vector<void*> params = {});
    Il2CppObject* invoke_virtual_v(void* obj, Il2CppClass* base, const char* method, std::vector<void*> params = {});

    Il2CppClass* get_class(const char* namezpace, const char* name);
    bool instance_of(void* obj, const char* namezpace, const char* name);
    bool implements_interface(void* obj, const char* namezpace, const char* name);

    MethodInfo* resolve_generic_method(uint64_t address);

    // Templates

    template<typename TObject>
    TObject* safe_il2cpp_cast(void* obj, const char* namezpace, const char* name)
    {
        if (!instance_of(obj, namezpace, name))
            return nullptr;

        return reinterpret_cast<TObject*>(obj);
    }

    template<typename T>
    T* create_object(const char* namezpace, const char* name)
    {
        return reinterpret_cast<T*>(untyped::create_object(namezpace, name));
    }

    template<typename T>
    T* create_object(Il2CppClass* klass)
    {
        return reinterpret_cast<T*>(untyped::create_object(klass));
    }

    template<typename Return = Il2CppObject>
    Return* invoke(void* obj, const char* method)
    {
        std::vector<void*> collected_params;
        return reinterpret_cast<Return*>(invoke_v(obj, method, collected_params));
    }

    template<typename Return = Il2CppObject, typename ...Args>
    Return* invoke(void* obj, const char* method, Args ... params)
    {
        std::vector<void*> collected_params{ { reinterpret_cast<void*>(params)... } };
        return reinterpret_cast<Return*>(invoke_v(obj, method, collected_params));
    }

    template<typename Return = Il2CppObject>
    Return* invoke_virtual(void* obj, Il2CppClass* base)
    {
        std::vector<void*> collected_params;
        return reinterpret_cast<Return*>(invoke_virtual_v(obj, base, method, collected_params));
    }

    template<typename Return = Il2CppObject, typename ...Args>
    Return* invoke_virtual(void* obj, Il2CppClass* base, const char* method, Args ... params)
    {
        std::vector<void*> collected_params{ { reinterpret_cast<void*>(params)... } };
        return reinterpret_cast<Return*>(invoke_virtual_v(obj, base, method, collected_params));
    }
}
