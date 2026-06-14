#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonDriver__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonDriver__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDriver__StaticFields_DEFINED)
#include <Modloader/app/structs/UpdateType__Enum.h>
#if defined(IL2CPP_STRUCT_UpdateType__Enum_DEFINED)
#define IL2CPP_STRUCT_MoonDriver__StaticFields_DEFINED
struct MoonDriver;
struct MoonDriver__StaticFields {
    struct MoonDriver* s_instance;
    UpdateType__Enum DefaultUpdateType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonDriver__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MoonDriver__StaticFields_FWDDECL
#include <Modloader/app/structs/MoonDriver.h>
#endif
#undef IL2CPP_STRUCT_MoonDriver__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDriver__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MoonDriver__StaticFields_FWDDECL)
#include <Modloader/app/structs/MoonDriver__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonDriver__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
