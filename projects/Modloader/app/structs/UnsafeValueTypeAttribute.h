#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnsafeValueTypeAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnsafeValueTypeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnsafeValueTypeAttribute_DEFINED)
#define IL2CPP_STRUCT_UnsafeValueTypeAttribute_DEFINED
struct UnsafeValueTypeAttribute__Class;
struct UnsafeValueTypeAttribute {
    struct UnsafeValueTypeAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UnsafeValueTypeAttribute_FWDDECL)
#define IL2CPP_STRUCT_UnsafeValueTypeAttribute_FWDDECL
#include <Modloader/app/structs/UnsafeValueTypeAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_UnsafeValueTypeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnsafeValueTypeAttribute_DEFINED) && !defined(IL2CPP_STRUCT_UnsafeValueTypeAttribute_FWDDECL)
#include <Modloader/app/structs/UnsafeValueTypeAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnsafeValueTypeAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
