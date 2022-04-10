#pragma once

#include <Il2CppModLoader/macros.h>

#include <string_view>
#include <vector>

namespace il2cpp
{
    struct MethodOverloadInfo
    {
        std::string name;
        int param_count;
        std::vector<MethodInfo const*> methods;
    };

    namespace unity
    {
        IL2CPP_MODLOADER_DLLEXPORT app::ScriptableObject* create_scriptable_object_untyped(std::string_view namezpace, std::string_view name);

        IL2CPP_MODLOADER_DLLEXPORT bool is_valid(void* obj);
        IL2CPP_MODLOADER_DLLEXPORT bool equals(void* o1, void* o2);
        IL2CPP_MODLOADER_DLLEXPORT bool not_equals(void* o1, void* o2);
        IL2CPP_MODLOADER_DLLEXPORT app::Type* get_type(std::string_view namezpace, std::string_view name);

        IL2CPP_MODLOADER_DLLEXPORT void* instantiate_object_untyped(void* object);
        IL2CPP_MODLOADER_DLLEXPORT void destroy_object(void* object);
        IL2CPP_MODLOADER_DLLEXPORT app::Transform* get_parent(void* object);
        IL2CPP_MODLOADER_DLLEXPORT void set_parent(void* child, void* parent);
        IL2CPP_MODLOADER_DLLEXPORT app::Transform* get_transform(void* object);
        IL2CPP_MODLOADER_DLLEXPORT app::GameObject* get_game_object(void* component);
        IL2CPP_MODLOADER_DLLEXPORT app::Component* add_component_untyped(app::GameObject* game_object, std::string_view namezpace, std::string_view name);
        IL2CPP_MODLOADER_DLLEXPORT app::Component* get_component_in_children_untyped(app::GameObject* game_object, std::string_view namezpace, std::string_view name);
        IL2CPP_MODLOADER_DLLEXPORT std::vector<app::Component*> get_components_in_children_untyped(app::GameObject* game_object, std::string_view namezpace, std::string_view name);
        IL2CPP_MODLOADER_DLLEXPORT std::string get_path(void* object);
        IL2CPP_MODLOADER_DLLEXPORT std::vector<std::string> get_path_v(void* object);

        IL2CPP_MODLOADER_DLLEXPORT bool get_active(void* object);
        IL2CPP_MODLOADER_DLLEXPORT void set_active(void* object, bool value);

        IL2CPP_MODLOADER_DLLEXPORT std::vector<app::GameObject*> get_children(void* obj);
        IL2CPP_MODLOADER_DLLEXPORT app::GameObject* find_child(void* obj, std::string_view name);
        IL2CPP_MODLOADER_DLLEXPORT app::GameObject* find_child(void* obj, std::vector<std::string> const& path);
        IL2CPP_MODLOADER_DLLEXPORT app::GameObject* find_child(void* obj, std::vector<std::string_view> const& path);
        IL2CPP_MODLOADER_DLLEXPORT std::vector<app::Component*> get_components_untyped(app::GameObject* game_object, std::string_view namezpace = "UnityEngine", std::string_view name = "Component");
        IL2CPP_MODLOADER_DLLEXPORT int32_t get_scene_count();
        IL2CPP_MODLOADER_DLLEXPORT app::Scene get_scene_at(int32_t i);
        IL2CPP_MODLOADER_DLLEXPORT app::Scene get_active_scene();
        IL2CPP_MODLOADER_DLLEXPORT app::Scene get_scene(app::GameObject* game_object);
        IL2CPP_MODLOADER_DLLEXPORT std::vector<app::GameObject*> get_root_game_objects(app::Scene& scene);

        IL2CPP_MODLOADER_DLLEXPORT app::String* get_object_csname(void* object);
        IL2CPP_MODLOADER_DLLEXPORT std::string get_object_name(void* object);
        IL2CPP_MODLOADER_DLLEXPORT std::string get_scene_name(app::Scene& scene);
        IL2CPP_MODLOADER_DLLEXPORT std::string get_scene_path(app::Scene& scene);

        template<typename T>
        T* instantiate_object(T* object)
        {
            return reinterpret_cast<T*>(instantiate_object_untyped(object));
        }

        template<typename Return = app::Component>
        Return* add_component(app::GameObject* game_object, std::string_view namezpace, std::string_view name)
        {
            return reinterpret_cast<Return*>(add_component_untyped(game_object, namezpace, name));
        }

        template<typename Return = app::Component>
        std::vector<Return*> get_components(app::GameObject* game_object, std::string_view namezpace = "UnityEngine", std::string_view name = "Component")
        {
            auto components = get_components_untyped(game_object, namezpace, name);
            std::vector<Return*> output;
            for (auto component : components)
                output.push_back(reinterpret_cast<Return*>(component));

            return output;
        }

        template<typename Return = app::Component>
        Return* get_component(app::GameObject* game_object, std::string_view namezpace = "UnityEngine", std::string_view name = "Component")
        {
            auto components = get_components_untyped(game_object, namezpace, name);
            return components.size() > 0 ? reinterpret_cast<Return*>(components.front()) : nullptr;
        }

        template<typename Return = app::Component>
        std::vector<Return*> get_components(void* obj, std::string_view namezpace = "UnityEngine", std::string_view name = "Component")
        {
            Il2CppObject* il2cpp_object = reinterpret_cast<Il2CppObject*>(obj);
            if (is_assignable(il2cpp_object, "UnityEngine", "GameObject"))
                return get_components<Return>(reinterpret_cast<GameObject*>(obj), namezpace, name);
            else if (is_assignable(il2cpp_object, "UnityEngine", "Component"))
                return get_components<Return>(get_game_object(obj), namezpace, name);
            else
                return {};
        }

        template<typename Return = app::Component>
        Return* get_component(void* obj, std::string_view namezpace = "UnityEngine", std::string_view name = "Component")
        {
            Il2CppObject* il2cpp_object = reinterpret_cast<Il2CppObject*>(obj);
            if (is_assignable(il2cpp_object, "UnityEngine", "GameObject"))
                return get_component<Return>(reinterpret_cast<app::GameObject*>(obj), namezpace, name);
            else if (is_assignable(il2cpp_object, "UnityEngine", "Component"))
                return get_component<Return>(get_game_object(obj), namezpace, name);
            else
                return nullptr;
        }

        template<typename Return = app::Component>
        Return* get_component_in_children(app::GameObject* game_object, std::string_view namezpace = "UnityEngine", std::string_view name = "Component")
        {
            return reinterpret_cast<Return*>(get_component_in_children_untyped(game_object, namezpace, name));
        }

        template<typename Return = app::Component>
        std::vector<Return*> get_components_in_children(void* obj, std::string_view namezpace = "UnityEngine", std::string_view name = "Component")
        {
            Il2CppObject* il2cpp_object = reinterpret_cast<Il2CppObject*>(obj);
            if (is_assignable(il2cpp_object, "UnityEngine", "GameObject"))
            {
                auto components = get_components_in_children_untyped(reinterpret_cast<app::GameObject*>(obj), namezpace, name);
                std::vector<Return*> output;
                for (auto component : components)
                    output.push_back(reinterpret_cast<Return*>(component));

                return output;
            }
            else if (is_assignable(il2cpp_object, "UnityEngine", "Component"))
                return get_components_in_children<Return>(get_game_object(obj), namezpace, name);
            else
                return {};
        }

        template<typename Return = app::ScriptableObject>
        Return* create_scriptable_object(std::string_view namezpace, std::string_view name)
        {
            return reinterpret_cast<Return*>(create_scriptable_object_untyped(namezpace, name));
        }
    }

    namespace untyped
    {
        IL2CPP_MODLOADER_DLLEXPORT Il2CppObject* create_object(std::string_view namezpace, std::string_view klass, std::string_view nested);
        IL2CPP_MODLOADER_DLLEXPORT Il2CppObject* create_object(std::string_view namezpace, std::string_view name);
        IL2CPP_MODLOADER_DLLEXPORT Il2CppObject* create_object(Il2CppClass* klass);

        IL2CPP_MODLOADER_DLLEXPORT Il2CppObject* box_value(Il2CppClass* klass, void* value);

        IL2CPP_MODLOADER_DLLEXPORT Il2CppClass* get_class(std::string_view namezpace, std::string_view name);
        IL2CPP_MODLOADER_DLLEXPORT Il2CppClass* get_nested_class(std::string_view namezpace, std::string_view name, std::string_view nested);

        IL2CPP_MODLOADER_DLLEXPORT Il2CppArraySize* array_new(Il2CppClass* element, il2cpp_array_size_t length);
        IL2CPP_MODLOADER_DLLEXPORT Il2CppArraySize* array_new_specific(Il2CppClass* array_klass, il2cpp_array_size_t length);
        IL2CPP_MODLOADER_DLLEXPORT Il2CppArraySize* array_new_full(Il2CppClass* array_klass, il2cpp_array_size_t* lengths, il2cpp_array_size_t* lower_bounds);
    }

    template<typename R = Il2CppArraySize, typename T>
    R* array_new(Il2CppClass* element, std::vector<T> items)
    {
        auto arr = untyped::array_new(element, items.size());
        auto elements = reinterpret_cast<T*>(arr->vector);
        for (auto i = 0; i < items.size(); ++i)
            elements[i] = items[i];

        return reinterpret_cast<R*>(arr);
    }

    void load_all_types();

    IL2CPP_MODLOADER_DLLEXPORT std::string convert_csstring(app::String* str);
    IL2CPP_MODLOADER_DLLEXPORT uint32_t gchandle_new(void* obj, bool pinned);
    IL2CPP_MODLOADER_DLLEXPORT uint32_t gchandle_new_weak(void* obj, bool track_ressurection);
    IL2CPP_MODLOADER_DLLEXPORT Il2CppObject* gchandle_target(uint32_t handle);
    IL2CPP_MODLOADER_DLLEXPORT void gchandle_free(uint32_t handle);

    template<typename Return>
    Return* gchandle_target(uint32_t handle)
    {
        return reinterpret_cast<Return*>(il2cpp::gchandle_target(handle));
    }

    struct KlassDescriptor
    {
        std::string namezpace;
        std::string name;
        Il2CppClass* klass;
    };

    IL2CPP_MODLOADER_DLLEXPORT std::vector<MethodOverloadInfo> const& get_all_methods(void* klass);
    IL2CPP_MODLOADER_DLLEXPORT int get_method_overload_count(Il2CppClass* klass, std::string_view method, int param_count);
    IL2CPP_MODLOADER_DLLEXPORT MethodInfo const* get_method_from_name_overloaded(Il2CppClass* klass, std::string_view method, int param_count, int overload);
    IL2CPP_MODLOADER_DLLEXPORT MethodInfo const* get_method_from_name_params(Il2CppClass* klass, std::string_view method, std::vector<void*> const& params);
    IL2CPP_MODLOADER_DLLEXPORT MethodInfo const* get_method_from_name(Il2CppClass* klass, std::string_view method, std::vector<Il2CppClass*> const& params);
    IL2CPP_MODLOADER_DLLEXPORT MethodInfo const* get_method_from_name(Il2CppClass* klass, std::string_view method, std::vector<KlassDescriptor> const& params);

    IL2CPP_MODLOADER_DLLEXPORT void free_obj(void* obj);

    IL2CPP_MODLOADER_DLLEXPORT app::String* string_new(std::string_view str);
    IL2CPP_MODLOADER_DLLEXPORT app::String* string_new(std::string_view str, uint32_t len);
    IL2CPP_MODLOADER_DLLEXPORT app::String* string_new(std::wstring_view str);

    IL2CPP_MODLOADER_DLLEXPORT Il2CppObject* invoke_v(void* obj, std::string_view method, std::vector<void*> params = {});
    IL2CPP_MODLOADER_DLLEXPORT Il2CppObject* invoke_virtual_v(void* obj, Il2CppClass* base, std::string_view method, std::vector<void*> params = {});

    IL2CPP_MODLOADER_DLLEXPORT bool is_assignable(Il2CppClass* klass, std::string_view namezpace, std::string_view name);
    IL2CPP_MODLOADER_DLLEXPORT bool is_assignable(Il2CppClass* klass, Il2CppClass* iklass);
    IL2CPP_MODLOADER_DLLEXPORT bool is_assignable(void* obj, std::string_view namezpace, std::string_view name);
    IL2CPP_MODLOADER_DLLEXPORT bool is_assignable(void* obj, Il2CppClass* iklass);

    IL2CPP_MODLOADER_DLLEXPORT MethodInfo* resolve_generic_method(uint64_t address);

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
    Return* invoke_virtual(void* obj, Il2CppClass* base, std::string_view method)
    {
        std::vector<void*> collected_params{};
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
    Return* get_class(std::string_view namezpace, std::string_view name)
    {
        return reinterpret_cast<Return*>(untyped::get_class(namezpace, name));
    }

    template<typename Return = Il2CppClass>
    Return* get_nested_class(std::string_view namezpace, std::string_view name, std::string_view nested)
    {
        return reinterpret_cast<Return*>(untyped::get_nested_class(namezpace, name, nested));
    }
}
