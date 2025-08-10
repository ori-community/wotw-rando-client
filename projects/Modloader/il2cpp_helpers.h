#pragma once

#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/Scene.h>
#include <Modloader/app/structs/ScriptableObject.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <memory>

#include <string>
#include <vector>

using GCHandleId = uint32_t;

namespace il2cpp {
    struct MethodOverloadInfo {
        std::string name;
        int param_count;
        std::vector<MethodInfo const*> methods;
    };

    struct KlassDescriptor {
        std::string namezpace;
        std::string name;
        Il2CppClass* klass;
    };

    namespace internal {
        IL2CPP_MODLOADER_DLLEXPORT Il2CppClass* get_game_object_class();

        IL2CPP_MODLOADER_DLLEXPORT Il2CppClass* get_component_class();
    } // namespace internal

    namespace untyped {
        IL2CPP_MODLOADER_DLLEXPORT Il2CppObject* create_object(std::string_view namezpace, std::string_view klass, std::string_view nested);

        IL2CPP_MODLOADER_DLLEXPORT Il2CppObject* create_object(std::string_view namezpace, std::string_view name);

        IL2CPP_MODLOADER_DLLEXPORT Il2CppObject* create_object(Il2CppClass* klass);

        IL2CPP_MODLOADER_DLLEXPORT Il2CppObject* box_value(Il2CppClass* klass, void* value);

        IL2CPP_MODLOADER_DLLEXPORT Il2CppClass* get_class(std::string_view namezpace, std::string_view name);

        IL2CPP_MODLOADER_DLLEXPORT Il2CppClass* get_nested_class(std::string_view namezpace, std::string_view name, std::string_view nested);

        IL2CPP_MODLOADER_DLLEXPORT Il2CppArraySize* array_new(Il2CppClass* element, il2cpp_array_size_t length);

        IL2CPP_MODLOADER_DLLEXPORT Il2CppArraySize* array_new_specific(Il2CppClass* array_klass, il2cpp_array_size_t length);

        IL2CPP_MODLOADER_DLLEXPORT Il2CppArraySize* array_new_full(Il2CppClass* array_klass, il2cpp_array_size_t* lengths, il2cpp_array_size_t* lower_bounds);
    } // namespace untyped

    IL2CPP_MODLOADER_DLLEXPORT Il2CppObject* gchandle_target(GCHandleId handle);

    IL2CPP_MODLOADER_DLLEXPORT GCHandleId gchandle_new(void* obj, bool pinned = false);

    IL2CPP_MODLOADER_DLLEXPORT GCHandleId gchandle_new_weak(void* obj, bool track_resurrection = true);

    IL2CPP_MODLOADER_DLLEXPORT void gchandle_free(GCHandleId handle);

    IL2CPP_MODLOADER_DLLEXPORT std::string convert_csstring(app::String* str);

    namespace unity {
        IL2CPP_MODLOADER_DLLEXPORT bool is_valid(void* obj);
    }

    class GCHandle {
    public:
        explicit GCHandle(GCHandleId m_id) :
            m_id(m_id) {}

        ~GCHandle() {
            il2cpp::gchandle_free(m_id);
        }

        Il2CppObject* target() {
            return il2cpp::gchandle_target(m_id);
        }

    private:
        GCHandleId m_id;
    };

    template<typename T>
    struct GCRef {
        std::shared_ptr<GCHandle> handle;

        explicit GCRef(T* obj, bool pinned = false) {
            handle = std::make_shared<GCHandle>(il2cpp::gchandle_new(obj, pinned));
        }

        T* ref() {
            if (handle == nullptr) {
                return nullptr;
            }

            return reinterpret_cast<T*>(handle->target());
        }

        T* operator*() {
            return ref();
        }
    };

    template<typename T>
    struct WeakGCRef {
        std::shared_ptr<GCHandle> handle;

        explicit WeakGCRef() :
            handle(nullptr) {
        };

        explicit WeakGCRef(T* obj, bool track_resurrection = true) {
            handle = std::make_shared<GCHandle>(il2cpp::gchandle_new_weak(obj, track_resurrection));
        }

        T* ref() {
            if (handle == nullptr) {
                return nullptr;
            }

            return reinterpret_cast<T*>(handle->target());
        }

        T* operator*() {
            return ref();
        }

        bool is_valid() {
            return il2cpp::unity::is_valid(ref());
        }
    };

    IL2CPP_MODLOADER_DLLEXPORT std::vector<MethodOverloadInfo> const& get_all_methods(void* klass);

    IL2CPP_MODLOADER_DLLEXPORT int get_method_overload_count(Il2CppClass* klass, std::string_view method, int param_count);

    IL2CPP_MODLOADER_DLLEXPORT MethodInfo const* get_method_from_name_overloaded(Il2CppClass* klass, std::string_view method, int param_count, int overload);

    IL2CPP_MODLOADER_DLLEXPORT MethodInfo const* get_method_from_name_params(Il2CppClass* klass, std::string_view method, std::vector<void*> const& params);

    IL2CPP_MODLOADER_DLLEXPORT MethodInfo const* get_method_from_name(Il2CppClass* klass, std::string_view method, std::vector<Il2CppClass*> const& params);

    IL2CPP_MODLOADER_DLLEXPORT MethodInfo const* get_method_from_name(Il2CppClass* klass, std::string_view method, std::vector<KlassDescriptor> const& params);

    IL2CPP_MODLOADER_DLLEXPORT void free_obj(void* obj);

    IL2CPP_MODLOADER_DLLEXPORT const Il2CppType* get_type(Il2CppClass* klass);

    IL2CPP_MODLOADER_DLLEXPORT const Il2CppType* get_type(void* klass);

    IL2CPP_MODLOADER_DLLEXPORT app::Type* get_runtime_type(const Il2CppType* type);

    IL2CPP_MODLOADER_DLLEXPORT app::Type* get_runtime_type(Il2CppClass* klass);

    IL2CPP_MODLOADER_DLLEXPORT app::Type* get_runtime_type(void* klass);

    IL2CPP_MODLOADER_DLLEXPORT void shutdown();

    IL2CPP_MODLOADER_DLLEXPORT app::String* string_new(std::string_view str);

    IL2CPP_MODLOADER_DLLEXPORT app::String* string_new(std::string_view str, uint32_t len);

    IL2CPP_MODLOADER_DLLEXPORT app::String* string_new(std::wstring_view str);

    IL2CPP_MODLOADER_DLLEXPORT Il2CppObject* invoke_v(void* obj, std::string_view method, std::vector<void*> params = {});

    IL2CPP_MODLOADER_DLLEXPORT Il2CppObject* invoke_virtual_v(void* obj, Il2CppClass* base, std::string_view method, std::vector<void*> params = {});

    IL2CPP_MODLOADER_DLLEXPORT bool is_assignable(Il2CppClass* klass, std::string_view namezpace, std::string_view name);

    IL2CPP_MODLOADER_DLLEXPORT bool is_assignable(Il2CppClass* klass, Il2CppClass* iklass);

    IL2CPP_MODLOADER_DLLEXPORT bool is_assignable(void* obj, std::string_view namezpace, std::string_view name);

    IL2CPP_MODLOADER_DLLEXPORT bool is_assignable(void* obj, Il2CppClass* iklass);

    IL2CPP_MODLOADER_DLLEXPORT bool is_assignable(void* obj, void* iklass);

    IL2CPP_MODLOADER_DLLEXPORT MethodInfo* resolve_generic_method(uint64_t address);

    IL2CPP_MODLOADER_DLLEXPORT std::string get_class_name(Il2CppClass* klass);

    IL2CPP_MODLOADER_DLLEXPORT std::string get_class_namespace(Il2CppClass* klass);

    IL2CPP_MODLOADER_DLLEXPORT void attach_thread();

    template<typename Return = Il2CppClass>
    Return* get_class(std::string_view namezpace, std::string_view name) {
        return reinterpret_cast<Return*>(untyped::get_class(namezpace, name));
    }

    template<typename Return = Il2CppClass>
    Return* get_nested_class(std::string_view namezpace, std::string_view name, std::string_view nested) {
        return reinterpret_cast<Return*>(untyped::get_nested_class(namezpace, name, nested));
    }

    template<typename Return = Il2CppClass>
    Return* get_class(Return** type_info, std::string_view namezpace, std::string_view name) {
        if (*type_info == nullptr) {
            *type_info = reinterpret_cast<Return*>(untyped::get_class(namezpace, name));
        }

        return *type_info;
    }

    template<typename Return = Il2CppClass>
    Return* get_nested_class(Return** type_info, std::string_view namezpace, std::string_view name, std::string_view nested) {
        if (*type_info == nullptr) {
            *type_info = reinterpret_cast<Return*>(untyped::get_nested_class(namezpace, name, nested));
        }

        return *type_info;
    }

    namespace unity {
        IL2CPP_MODLOADER_DLLEXPORT app::ScriptableObject* create_scriptable_object_untyped(Il2CppClass* klass);

        IL2CPP_MODLOADER_DLLEXPORT bool is_valid(void* obj);

        IL2CPP_MODLOADER_DLLEXPORT bool equals(void* o1, void* o2);

        IL2CPP_MODLOADER_DLLEXPORT bool not_equals(void* o1, void* o2);

        IL2CPP_MODLOADER_DLLEXPORT void* instantiate_object_untyped(void* object);

        IL2CPP_MODLOADER_DLLEXPORT void destroy_object(void* object);

        IL2CPP_MODLOADER_DLLEXPORT void destroy_object_immediately(void* object);

        IL2CPP_MODLOADER_DLLEXPORT app::Transform* get_parent(void* object);

        IL2CPP_MODLOADER_DLLEXPORT void set_parent(void* child, void* parent, bool keep_local = false);

        IL2CPP_MODLOADER_DLLEXPORT app::Transform* get_transform(void* object);

        IL2CPP_MODLOADER_DLLEXPORT app::GameObject* get_game_object(void* component);

        IL2CPP_MODLOADER_DLLEXPORT app::Component_1* add_component_untyped(app::GameObject* game_object, Il2CppClass* klass);

        IL2CPP_MODLOADER_DLLEXPORT app::Component_1* get_component_in_children_untyped(app::GameObject* game_object, Il2CppClass* klass, bool include_inactive = false);

        IL2CPP_MODLOADER_DLLEXPORT std::vector<app::Component_1*> get_components_in_children_untyped(app::GameObject* game_object, Il2CppClass* klass, bool include_inactive = false);

        IL2CPP_MODLOADER_DLLEXPORT std::string get_path(void* object);

        IL2CPP_MODLOADER_DLLEXPORT std::vector<std::string> get_path_v(void* object);

        IL2CPP_MODLOADER_DLLEXPORT app::Vector3 get_position(void* obj);

        IL2CPP_MODLOADER_DLLEXPORT app::Vector3 get_rotation(void* obj);

        IL2CPP_MODLOADER_DLLEXPORT app::Vector3 get_local_position(void* obj);

        IL2CPP_MODLOADER_DLLEXPORT app::Vector3 get_local_rotation(void* obj);

        IL2CPP_MODLOADER_DLLEXPORT app::Vector3 get_local_scale(void* obj);

        IL2CPP_MODLOADER_DLLEXPORT void set_position(void* obj, app::Vector3 value);

        IL2CPP_MODLOADER_DLLEXPORT void set_rotation(void* obj, app::Vector3 value);

        IL2CPP_MODLOADER_DLLEXPORT void set_local_position(void* obj, app::Vector3 value);

        IL2CPP_MODLOADER_DLLEXPORT void set_local_rotation(void* obj, app::Vector3 value);

        IL2CPP_MODLOADER_DLLEXPORT void set_local_scale(void* obj, app::Vector3 value);

        IL2CPP_MODLOADER_DLLEXPORT bool get_active(void* object);

        IL2CPP_MODLOADER_DLLEXPORT bool get_active_self(void* object);

        IL2CPP_MODLOADER_DLLEXPORT void set_active(void* object, bool value);

        IL2CPP_MODLOADER_DLLEXPORT void set_active_recursively(void* object, bool value);

        IL2CPP_MODLOADER_DLLEXPORT std::vector<app::GameObject*> get_children(void* obj);

        IL2CPP_MODLOADER_DLLEXPORT app::GameObject* get_child(void* obj, int index);

        IL2CPP_MODLOADER_DLLEXPORT app::GameObject* find_child(void* obj, std::string_view name);

        IL2CPP_MODLOADER_DLLEXPORT app::GameObject* find_child(void* obj, std::vector<std::string> const& path);

        IL2CPP_MODLOADER_DLLEXPORT app::GameObject* find_child(void* obj, std::vector<std::string_view> const& path);

        IL2CPP_MODLOADER_DLLEXPORT std::vector<app::GameObject*> find_children(void* obj, std::string_view name);

        IL2CPP_MODLOADER_DLLEXPORT std::vector<app::GameObject*> find_children(void* obj, std::vector<std::string_view> const& path);

        IL2CPP_MODLOADER_DLLEXPORT std::vector<app::GameObject*> find_children(void* obj, std::vector<std::string> const& path);

        IL2CPP_MODLOADER_DLLEXPORT std::vector<app::Component_1*> get_components_untyped(app::GameObject* game_object, Il2CppClass* klass);

        IL2CPP_MODLOADER_DLLEXPORT int32_t get_scene_count();

        IL2CPP_MODLOADER_DLLEXPORT app::Scene get_scene_at(int32_t i);

        IL2CPP_MODLOADER_DLLEXPORT app::Scene get_active_scene();

        IL2CPP_MODLOADER_DLLEXPORT app::Scene get_scene(app::GameObject* game_object);

        IL2CPP_MODLOADER_DLLEXPORT std::vector<app::GameObject*> get_root_game_objects(app::Scene& scene);

        IL2CPP_MODLOADER_DLLEXPORT app::String* get_object_csname(void* object);

        IL2CPP_MODLOADER_DLLEXPORT std::string get_object_name(void* object);

        IL2CPP_MODLOADER_DLLEXPORT std::string get_scene_name(const app::Scene& scene);

        IL2CPP_MODLOADER_DLLEXPORT std::string get_scene_path(const app::Scene& scene);

        IL2CPP_MODLOADER_DLLEXPORT void set_object_name(void* object, std::string_view name);

        template<typename T>
        T* instantiate_object(T* object) {
            return reinterpret_cast<T*>(instantiate_object_untyped(object));
        }

        template<typename Return = app::Component_1>
        Return* add_component(app::GameObject* game_object, Il2CppClass* klass) {
            return reinterpret_cast<Return*>(add_component_untyped(game_object, klass));
        }

        template<typename Return = app::Component_1>
        Return* add_component(app::GameObject* game_object, void* klass) {
            return add_component<Return>(game_object, reinterpret_cast<Il2CppClass*>(klass));
        }

        template<typename Return = app::Component_1>
        std::vector<Return*> get_components(app::GameObject* game_object, Il2CppClass* klass) {
            auto components = get_components_untyped(game_object, klass);
            std::vector<Return*> output;
            for (auto component: components)
                output.push_back(reinterpret_cast<Return*>(component));

            return output;
        }

        template<typename Return = app::Component_1>
        Return* get_component(app::GameObject* game_object, Il2CppClass* klass) {
            auto components = get_components_untyped(game_object, klass);
            return components.size() > 0 ? reinterpret_cast<Return*>(components.front()) : nullptr;
        }

        template<typename Return = app::Component_1>
        std::vector<Return*> get_components(void* obj, Il2CppClass* klass = nullptr) {
            if (klass == nullptr) {
                klass = internal::get_component_class();
            }

            Il2CppObject* il2cpp_object = reinterpret_cast<Il2CppObject*>(obj);

            if (is_assignable(il2cpp_object, internal::get_game_object_class())) {
                return get_components<Return>(reinterpret_cast<app::GameObject*>(obj), klass);
            }

            if (is_assignable(il2cpp_object, internal::get_component_class())) {
                return get_components<Return>(get_game_object(obj), klass);
            }

            return {};
        }

        template<typename Return = app::Component_1>
        std::vector<Return*> get_components(void* obj, void* klass) {
            return get_components<Return>(static_cast<app::GameObject*>(obj), static_cast<Il2CppClass*>(klass));
        }

        template<typename Return = app::Component_1>
        Return* get_component(void* obj, Il2CppClass* klass) {
            Il2CppObject* il2cpp_object = reinterpret_cast<Il2CppObject*>(obj);
            if (is_assignable(il2cpp_object, internal::get_game_object_class()))
                return get_component<Return>(reinterpret_cast<app::GameObject*>(obj), klass);
            else if (is_assignable(il2cpp_object, internal::get_component_class()))
                return get_component<Return>(get_game_object(obj), klass);
            else
                return nullptr;
        }

        template<typename Return = app::Component_1>
        Return* get_component(void* obj, void* klass) {
            return get_component<Return>(obj, reinterpret_cast<Il2CppClass*>(klass));
        }

        template<typename Return = app::Component_1>
        Return* get_component_in_children(app::GameObject* game_object, Il2CppClass* klass, bool include_inactive = false) {
            return reinterpret_cast<Return*>(get_component_in_children_untyped(game_object, klass, include_inactive));
        }

        template<typename Return = app::Component_1>
        Return* get_component_in_children(app::GameObject* game_object, void* klass, bool include_inactive = false) {
            return get_component_in_children<Return>(game_object, reinterpret_cast<Il2CppClass*>(klass), include_inactive);
        }

        template<typename Return = app::Component_1>
        std::vector<Return*> get_components_in_children(void* obj, Il2CppClass* klass, bool include_inactive = false) {
            Il2CppObject* il2cpp_object = reinterpret_cast<Il2CppObject*>(obj);

            if (is_assignable(il2cpp_object, internal::get_game_object_class())) {
                auto components = get_components_in_children_untyped(reinterpret_cast<app::GameObject*>(obj), klass, include_inactive);
                std::vector<Return*> output;
                for (auto component: components) {
                    output.push_back(reinterpret_cast<Return*>(component));
                }

                return output;
            }

            if (is_assignable(il2cpp_object, internal::get_component_class())) {
                return get_components_in_children<Return>(get_game_object(obj), klass, include_inactive);
            }

            return {};
        }

        template<typename Return = app::Component_1>
        std::vector<Return*> get_components_in_children(void* obj, void* klass, bool include_inactive = false) {
            return get_components_in_children<Return>(obj, reinterpret_cast<Il2CppClass*>(klass), include_inactive);
        }

        template<typename Return = app::ScriptableObject, typename Clazz = Il2CppClass>
        Return* create_scriptable_object(Clazz* klass) {
            return reinterpret_cast<Return*>(create_scriptable_object_untyped(reinterpret_cast<Il2CppClass*>(klass)));
        }

        template<typename Return = app::ScriptableObject, typename Clazz = Il2CppClass>
        Return* create_scriptable_object(Clazz** type_info, std::string_view namezpace, std::string_view name) {
            return create_scriptable_object<Return>(get_class(type_info, namezpace, name));
        }
    } // namespace unity

    template<typename R = Il2CppArraySize, typename Clazz = Il2CppClass, typename T>
    R* array_new(Clazz* element_class, const std::vector<T>& items) {
        auto arr = untyped::array_new(reinterpret_cast<Il2CppClass*>(element_class), items.size());
        auto elements = reinterpret_cast<T*>(arr->vector);
        for (auto i = 0; i < items.size(); ++i) {
            elements[i] = items[i];
        }

        return reinterpret_cast<R*>(arr);
    }

    template<typename R = Il2CppArraySize, typename Clazz = Il2CppClass>
    R* array_new(Clazz* element, int size) {
        auto arr = untyped::array_new(reinterpret_cast<Il2CppClass*>(element), size);
        return reinterpret_cast<R*>(arr);
    }

    void load_all_types();

    template<typename Return>
    Return* gchandle_target(uint32_t handle) {
        return reinterpret_cast<Return*>(il2cpp::gchandle_target(handle));
    }

    // Templates

    template<typename Return>
    Return* safe_il2cpp_cast(void* obj, Il2CppClass* klass) {
        if (!is_assignable(obj, klass))
            return nullptr;

        return reinterpret_cast<Return*>(obj);
    }

    template<typename Return>
    Return* safe_il2cpp_cast(void* obj, void* klass) {
        return safe_il2cpp_cast<Return>(obj, static_cast<Il2CppClass*>(klass));
    }

    template<typename T>
    T* create_object(std::string_view namezpace, std::string_view klass, std::string_view nested) {
        return reinterpret_cast<T*>(untyped::create_object(namezpace, klass, nested));
    }

    template<typename T>
    T* create_object(std::string_view namezpace, std::string_view name) {
        return reinterpret_cast<T*>(untyped::create_object(namezpace, name));
    }

    template<typename T, typename Clazz = Il2CppClass>
    T* create_object(Clazz* klass) {
        return reinterpret_cast<T*>(untyped::create_object(reinterpret_cast<Il2CppClass*>(klass)));
    }

    template<typename Return = Il2CppObject>
    Return* invoke(void* obj, std::string_view method) {
        std::vector<void*> collected_params;
        return reinterpret_cast<Return*>(invoke_v(obj, method, collected_params));
    }

    template<typename Return = Il2CppObject, typename... Args>
    Return* invoke(void* obj, std::string_view method, Args... params) {
        std::vector<void*> collected_params{{reinterpret_cast<void*>(params)...}};
        return reinterpret_cast<Return*>(invoke_v(obj, method, collected_params));
    }

    template<typename Return = Il2CppObject>
    Return* invoke_virtual(void* obj, Il2CppClass* base, std::string_view method) {
        std::vector<void*> collected_params{};
        return reinterpret_cast<Return*>(invoke_virtual_v(obj, base, method, collected_params));
    }

    template<typename Return = Il2CppObject, typename... Args>
    Return* invoke_virtual(void* obj, Il2CppClass* base, std::string_view method, Args... params) {
        std::vector<void*> collected_params{{reinterpret_cast<void*>(params)...}};
        return reinterpret_cast<Return*>(invoke_virtual_v(obj, base, method, collected_params));
    }

    constexpr bool use_internal_box_function = false;

    template<typename Return, typename Input, typename InputKlass>
    Return* box_value(InputKlass* klass, Input value) {
        if (use_internal_box_function) {
            return reinterpret_cast<Return*>(untyped::box_value(
                reinterpret_cast<Il2CppClass*>(klass),
                reinterpret_cast<void*>(&value)
            ));
        } else {
            auto boxed_value = create_object<Return>(reinterpret_cast<Il2CppClass*>(klass));
            boxed_value->fields = value;
            return boxed_value;
        }
    }

    template<typename ListType = app::List_1_System_Int32_>
    struct ListIterator {
        struct ListIteratorState {
            using iterator_category = std::contiguous_iterator_tag;
            using difference_type = std::ptrdiff_t;
            using value_type = std::remove_reference_t<decltype(ListType::fields._items->vector[0])>;
            using pointer = value_type*;
            using reference = value_type&;

            explicit ListIteratorState(pointer ptr) :
                m_ptr(ptr) {
            }

            reference operator*() const { return *m_ptr; }
            pointer operator->() { return m_ptr; }

            // Prefix increment
            ListIteratorState& operator++() {
                ++m_ptr;
                return *this;
            }

            // Postfix increment
            ListIteratorState operator++(int) {
                ListIteratorState tmp = *this;
                ++(*this);
                return tmp;
            }

            friend bool operator==(const ListIteratorState& a, const ListIteratorState& b) { return a.m_ptr == b.m_ptr; };
            friend bool operator!=(const ListIteratorState& a, const ListIteratorState& b) { return a.m_ptr != b.m_ptr; };

        private:
            pointer m_ptr;
        };

        ListType*& list;
        ListIteratorState begin() { return ListIteratorState(&list->fields._items->vector[0]); }
        ListIteratorState end() { return ListIteratorState(&list->fields._items->vector[list->fields._size]); }

        explicit ListIterator(ListType*& list) :
            list(list) {
        }
    };

    template<typename ArrayType = app::Int32__Array>
    struct ArrayIterator {
        struct ArrayIteratorState {
            using iterator_category = std::contiguous_iterator_tag;
            using difference_type = std::ptrdiff_t;
            using value_type = std::remove_reference_t<decltype(ArrayType::vector[0])>;
            using pointer = value_type*;
            using reference = value_type&;

            explicit ArrayIteratorState(pointer ptr) :
                m_ptr(ptr) {
            }

            reference operator*() const { return *m_ptr; }
            pointer operator->() { return m_ptr; }

            // Prefix increment
            ArrayIteratorState& operator++() {
                ++m_ptr;
                return *this;
            }

            // Postfix increment
            ArrayIteratorState operator++(int) {
                ArrayIteratorState tmp = *this;
                ++(*this);
                return tmp;
            }

            friend bool operator==(const ArrayIteratorState& a, const ArrayIteratorState& b) { return a.m_ptr == b.m_ptr; };
            friend bool operator!=(const ArrayIteratorState& a, const ArrayIteratorState& b) { return a.m_ptr != b.m_ptr; };

        private:
            pointer m_ptr;
        };

        ArrayType*& arr;
        ArrayIteratorState begin() { return ArrayIteratorState(&arr->vector[0]); }
        ArrayIteratorState end() { return ArrayIteratorState(&arr->vector[arr->max_length]); }

        explicit ArrayIterator(ArrayType*& arr) :
            arr(arr) {
        }
    };
} // namespace il2cpp
