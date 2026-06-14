#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonRequiredAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonRequiredAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonRequiredAttribute_DEFINED)
#define IL2CPP_STRUCT_JsonRequiredAttribute_DEFINED
struct JsonRequiredAttribute__Class;
struct JsonRequiredAttribute {
    struct JsonRequiredAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_JsonRequiredAttribute_FWDDECL)
#define IL2CPP_STRUCT_JsonRequiredAttribute_FWDDECL
#include <Modloader/app/structs/JsonRequiredAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonRequiredAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonRequiredAttribute_DEFINED) && !defined(IL2CPP_STRUCT_JsonRequiredAttribute_FWDDECL)
#include <Modloader/app/structs/JsonRequiredAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonRequiredAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
