#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NotNullAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NotNullAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotNullAttribute_DEFINED)
#define IL2CPP_STRUCT_NotNullAttribute_DEFINED
struct NotNullAttribute__Class;
struct NotNullAttribute {
    struct NotNullAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NotNullAttribute_FWDDECL)
#define IL2CPP_STRUCT_NotNullAttribute_FWDDECL
#include <Modloader/app/structs/NotNullAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_NotNullAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotNullAttribute_DEFINED) && !defined(IL2CPP_STRUCT_NotNullAttribute_FWDDECL)
#include <Modloader/app/structs/NotNullAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NotNullAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
