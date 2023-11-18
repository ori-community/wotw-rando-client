#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CanBeNullAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CanBeNullAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_CanBeNullAttribute_DEFINED)
#define IL2CPP_STRUCT_CanBeNullAttribute_DEFINED
struct CanBeNullAttribute__Class;
struct CanBeNullAttribute {
    struct CanBeNullAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CanBeNullAttribute_FWDDECL)
#define IL2CPP_STRUCT_CanBeNullAttribute_FWDDECL
#include <Modloader/app/structs/CanBeNullAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_CanBeNullAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_CanBeNullAttribute_DEFINED) && !defined(IL2CPP_STRUCT_CanBeNullAttribute_FWDDECL)
#include <Modloader/app/structs/CanBeNullAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CanBeNullAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
