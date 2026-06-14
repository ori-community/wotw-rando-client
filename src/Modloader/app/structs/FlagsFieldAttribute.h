#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FlagsFieldAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FlagsFieldAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlagsFieldAttribute_DEFINED)
#define IL2CPP_STRUCT_FlagsFieldAttribute_DEFINED
struct FlagsFieldAttribute__Class;
struct FlagsFieldAttribute {
    struct FlagsFieldAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FlagsFieldAttribute_FWDDECL)
#define IL2CPP_STRUCT_FlagsFieldAttribute_FWDDECL
#include <Modloader/app/structs/FlagsFieldAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_FlagsFieldAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlagsFieldAttribute_DEFINED) && !defined(IL2CPP_STRUCT_FlagsFieldAttribute_FWDDECL)
#include <Modloader/app/structs/FlagsFieldAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FlagsFieldAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
