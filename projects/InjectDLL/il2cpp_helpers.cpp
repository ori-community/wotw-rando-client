#include <il2cpp_helpers.h>
#include <common.h>
#include <interception_macros.h>
#include <dev/dev_commands.h>

#include <Common/ext.h>

namespace il2cpp
{
    namespace
    {
        std::unordered_map<std::string, Il2CppClass*> resolved_classes;

        struct Il2CppDomain;
        struct Il2CppAssembly;
        struct Il2CppImage;
        struct Il2CppException;

        BINDING(2499936, Il2CppClass*, il2cpp_class_from_name, (Il2CppImage* image, const char* namespaze, const char* name));
        BINDING(2501792, Il2CppDomain*, il2cpp_domain_get, ());
        BINDING(2501856, Il2CppAssembly**, il2cpp_domain_get_assemblies, (Il2CppDomain* domain, size_t* size));
        BINDING(1053216, Il2CppImage*, il2cpp_assembly_get_image, (Il2CppAssembly* assembly));
        BINDING(2504816, Il2CppObject*, il2cpp_object_new, (Il2CppClass* klass));
        BINDING(2500336, Il2CppMethodInfo*, il2cpp_class_get_method_from_name, (Il2CppClass* klass, const char* name, int argsCount));
        BINDING(2504800, Il2CppMethodInfo*, il2cpp_object_get_virtual_method, (Il2CppObject* obj, const Il2CppMethodInfo* method));
        BINDING(1111111, Il2CppObject*, il2cpp_runtime_invoke, (const Il2CppMethodInfo* method, void* obj, void** params, Il2CppException** exc));
    }

    namespace untyped
    {
        Il2CppObject* invoke(Il2CppObject* obj, const char* method, int param_count, void** params)
        {
            Il2CppException* exc = nullptr;
            auto method_info = il2cpp_class_get_method_from_name(obj->klass, method, param_count);
            return il2cpp_runtime_invoke(method_info, obj, params, &exc);
        }

        Il2CppObject* invoke_virtual(Il2CppObject* obj, Il2CppClass* base, const char* method, int param_count, void** params)
        {
            Il2CppException* exc = nullptr;
            auto method_info = il2cpp_class_get_method_from_name(base, method, param_count);
            auto virtual_method_info = il2cpp_object_get_virtual_method(obj, method_info);
            return il2cpp_runtime_invoke(virtual_method_info, obj, params, &exc);
        }

        Il2CppObject* create_object(const char* namezpace, const char* name)
        {
            auto klass = get_class(namezpace, name);
            if (klass == nullptr)
                return nullptr;

            return create_object(klass);
        }

        Il2CppObject* create_object(Il2CppClass* klass)
        {
            return il2cpp_object_new(klass);
        }

        Il2CppClass* get_class(const char* namezpace, const char* name)
        {
            std::string full_name = std::string(namezpace) + "." + name;
            auto it = resolved_classes.find(full_name);
            if (it != resolved_classes.end())
                return it->second;

            Il2CppClass* klass = nullptr;
            size_t i = 0;
            size_t size = 0;
            auto domain = il2cpp_domain_get();
            auto assemblies = il2cpp_domain_get_assemblies(domain, &size);
            while (klass == nullptr && i < size)
            {
                auto image = il2cpp_assembly_get_image(assemblies[i]);
                klass = il2cpp_class_from_name(image, namezpace, name);
                ++i;
            }

            if (klass != nullptr)
                resolved_classes[full_name] = klass;
            else
                trace(MessageType::Error, 1, "il2cpp", format("Failed to find klass %s.%s", namezpace, name));

            return klass;
        }

        bool instance_of(Il2CppClass* klass, const char* namezpace, const char* name)
        {
            return instance_of(klass, get_class(namezpace, name));
        }

        int implements_interface(Il2CppClass* klass, const char* namezpace, const char* name)
        {
            return implements_interface(klass, get_class(namezpace, name));
        }

        bool instance_of(Il2CppClass* klass, Il2CppClass* parent)
        {
            for (auto i = 0; i < klass->_2.typeHierarchyDepth; ++i)
                if (klass->_2.typeHierarchy[i] == klass)
                    return true;

            return false;
        }

        int implements_interface(Il2CppClass* klass, Il2CppClass* iklass)
        {
            for (auto i = 0; i < klass->_2.interfaces_count; ++i)
                if (klass->_1.implementedInterfaces[i] == iklass)
                    return i;

            return -1;
        }
    }

    bool instance_of(void* obj, const char* namezpace, const char* name)
    {
        return untyped::instance_of(reinterpret_cast<Il2CppObject*>(obj)->klass, namezpace, name);
    }

    bool implements_interface(void* obj, const char* namezpace, const char* name)
    {
        return untyped::instance_of(reinterpret_cast<Il2CppObject*>(obj)->klass, namezpace, name);
    }
}