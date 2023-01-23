#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FlagsAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FlagsAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlagsAttribute_DEFINED)
#define IL2CPP_STRUCT_FlagsAttribute_DEFINED
struct FlagsAttribute__Class;
struct FlagsAttribute {
    struct FlagsAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FlagsAttribute_FWDDECL)
#define IL2CPP_STRUCT_FlagsAttribute_FWDDECL
#include <Modloader/app/structs/FlagsAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_FlagsAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlagsAttribute_DEFINED) && !defined(IL2CPP_STRUCT_FlagsAttribute_FWDDECL)
#include <Modloader/app/structs/FlagsAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FlagsAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
