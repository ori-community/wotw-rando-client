#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PropertyAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PropertyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyAttribute_DEFINED)
#define IL2CPP_STRUCT_PropertyAttribute_DEFINED
struct PropertyAttribute__Class;
struct PropertyAttribute {
    struct PropertyAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PropertyAttribute_FWDDECL)
#define IL2CPP_STRUCT_PropertyAttribute_FWDDECL
#include <Modloader/app/structs/PropertyAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_PropertyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyAttribute_DEFINED) && !defined(IL2CPP_STRUCT_PropertyAttribute_FWDDECL)
#include <Modloader/app/structs/PropertyAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PropertyAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
