#pragma once

#include <string_view>
#include <vector>

namespace il2cpp
{
    namespace unity
    {
        void destroy_object(void* object);
        app::GameObject* get_game_object(void* component);
        app::Component* add_component_untyped(app::GameObject* game_object, std::string_view namespaze, std::string_view name);
        std::vector<app::GameObject*> get_children(app::GameObject* game_object);
        std::vector<app::Component*> get_components(app::GameObject* game_object, std::string_view namespaze = "UnityEngine", std::string_view name = "Component");
        int32_t get_scene_count();
        app::Scene get_scene_at(int32_t i);
        app::Scene get_active_scene();
        app::Scene get_scene(app::GameObject* game_object);
        std::vector<app::GameObject*> get_root_game_objects(app::Scene& scene);

        std::string get_object_name(void* object);
        std::string get_scene_name(app::Scene& scene);
        std::string get_scene_path(app::Scene& scene);


        template<typename Return = app::Component>
        Return* add_component(app::GameObject* game_object, std::string_view namespaze, std::string_view name)
        {
            return reinterpret_cast<Return*>(add_component_untyped(game_object, namespaze, name));
        }
    }

    namespace untyped
    {
        Il2CppObject* create_object(std::string_view namezpace, std::string_view klass, std::string_view nested);
        Il2CppObject* create_object(std::string_view namezpace, std::string_view name);
        Il2CppObject* create_object(Il2CppClass* klass);

        bool is_assignable(Il2CppClass* klass, std::string_view namezpace, std::string_view name);
        bool is_assignable(Il2CppClass* klass, Il2CppClass* iklass);

        Il2CppObject* box_value(Il2CppClass* klass, void* value);

        Il2CppClass* get_class(std::string_view namezpace, std::string_view name);
        Il2CppClass* get_nested_class(std::string_view namezpace, std::string_view name, std::string_view nested);
    }

    uint32_t gchandle_new(void* obj, bool pinned);
    uint32_t gchandle_new_weak(void* obj, bool track_ressurection);
    Il2CppObject* gchandle_target(uint32_t handle);
    void gchandle_free(uint32_t handle);

    int get_method_overload_count(Il2CppClass* klass, std::string_view method, int param_count);
    MethodInfo const* get_method_from_name_overloaded(Il2CppClass* klass, std::string_view method, int param_count, int overload);
    MethodInfo const* get_method_from_name_params(Il2CppClass* klass, std::string_view method, std::vector<void*> const& params);
    MethodInfo const* get_method_from_name(Il2CppClass* klass, std::string_view method, std::vector<Il2CppClass*> const& params);

    void free_obj(void* obj);

    Il2CppString* string_new(std::string_view str);
    Il2CppString* string_new(std::string_view str, uint32_t len);
    Il2CppString* string_new(std::wstring_view str);

    Il2CppObject* invoke_v(void* obj, std::string_view method, std::vector<void*> params = {});
    Il2CppObject* invoke_virtual_v(void* obj, Il2CppClass* base, std::string_view method, std::vector<void*> params = {});

    bool is_assignable(void* obj, std::string_view namezpace, std::string_view name);

    MethodInfo* resolve_generic_method(uint64_t address);

    // Templates

    template<typename TObject>
    TObject* safe_il2cpp_cast(void* obj, std::string_view namezpace, std::string_view name)
    {
        if (!is_assignable(obj, namezpace, name))
            return nullptr;

        return reinterpret_cast<TObject*>(obj);
    }

    template<typename T>
    T* create_object(std::string_view namezpace, std::string_view klass, std::string_view nested)
    {
        return reinterpret_cast<T*>(untyped::create_object(namezpace, klass, nested));
    }

    template<typename T>
    T* create_object(std::string_view namezpace, std::string_view name)
    {
        return reinterpret_cast<T*>(untyped::create_object(namezpace, name));
    }

    template<typename T>
    T* create_object(Il2CppClass* klass)
    {
        return reinterpret_cast<T*>(untyped::create_object(klass));
    }

    template<typename Return = Il2CppObject>
    Return* invoke(void* obj, std::string_view method)
    {
        std::vector<void*> collected_params;
        return reinterpret_cast<Return*>(invoke_v(obj, method, collected_params));
    }

    template<typename Return = Il2CppObject, typename ...Args>
    Return* invoke(void* obj, std::string_view method, Args ... params)
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
    Return* invoke_virtual(void* obj, Il2CppClass* base, std::string_view method, Args ... params)
    {
        std::vector<void*> collected_params{ { reinterpret_cast<void*>(params)... } };
        return reinterpret_cast<Return*>(invoke_virtual_v(obj, base, method, collected_params));
    }

    constexpr bool use_internal_box_function = false;
    template<typename Return, typename Input, typename InputKlass>
    Return* box_value(InputKlass* klass, Input value)
    {
        if (use_internal_box_function)
        {
            return reinterpret_cast<Return*>(untyped::box_value(
                reinterpret_cast<Il2CppClass*>(klass), reinterpret_cast<void*>(&value)));
        }
        else
        {
            auto boxed_value = create_object<Return>(klass);
            boxed_value->fields = value;
            return boxed_value;
        }
    }

    template<typename Return = Il2CppClass>
    Return* get_class(std::string_view namespaze, std::string_view name)
    {
        return reinterpret_cast<Return*>(untyped::get_class(namespaze, name));
    }

    template<typename Return = Il2CppClass>
    Return* get_nested_class(std::string_view namespaze, std::string_view name, std::string_view nested)
    {
        return reinterpret_cast<Return*>(untyped::get_nested_class(namespaze, name, nested));
    }
}
