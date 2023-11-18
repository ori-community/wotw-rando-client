#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExposedPropertyAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExposedPropertyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExposedPropertyAttribute_DEFINED)
#define IL2CPP_STRUCT_ExposedPropertyAttribute_DEFINED
struct ExposedPropertyAttribute__Class;
struct ExposedPropertyAttribute {
    struct ExposedPropertyAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ExposedPropertyAttribute_FWDDECL)
#define IL2CPP_STRUCT_ExposedPropertyAttribute_FWDDECL
#include <Modloader/app/structs/ExposedPropertyAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ExposedPropertyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExposedPropertyAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ExposedPropertyAttribute_FWDDECL)
#include <Modloader/app/structs/ExposedPropertyAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExposedPropertyAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
