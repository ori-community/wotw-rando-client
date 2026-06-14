#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CStreamWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CStreamWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CStreamWriter__Fields_DEFINED)
#include <Modloader/app/structs/StreamWriter__Fields.h>
#if defined(IL2CPP_STRUCT_StreamWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_CStreamWriter__Fields_DEFINED
struct TermInfoDriver;
struct CStreamWriter__Fields {
    struct StreamWriter__Fields _;
    struct TermInfoDriver* driver;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CStreamWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_CStreamWriter__Fields_FWDDECL
#include <Modloader/app/structs/TermInfoDriver.h>
#endif
#undef IL2CPP_STRUCT_CStreamWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CStreamWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CStreamWriter__Fields_FWDDECL)
#include <Modloader/app/structs/CStreamWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CStreamWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
