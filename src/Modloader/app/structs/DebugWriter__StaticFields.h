#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugWriter__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugWriter__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugWriter__StaticFields_DEFINED)
#define IL2CPP_STRUCT_DebugWriter__StaticFields_DEFINED
struct NumberFormatInfo;
struct DebugWriter;
struct DebugWriter__StaticFields {
    struct NumberFormatInfo* nfi;
    struct DebugWriter* instance;
};
#endif
#if !defined(IL2CPP_STRUCT_DebugWriter__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_DebugWriter__StaticFields_FWDDECL
#include <Modloader/app/structs/DebugWriter.h>
#include <Modloader/app/structs/NumberFormatInfo.h>
#endif
#undef IL2CPP_STRUCT_DebugWriter__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugWriter__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_DebugWriter__StaticFields_FWDDECL)
#include <Modloader/app/structs/DebugWriter__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugWriter__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
