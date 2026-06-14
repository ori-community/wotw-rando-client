#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DoWorkEventArgs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DoWorkEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoWorkEventArgs__Fields_DEFINED)
#include <Modloader/app/structs/CancelEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_CancelEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_DoWorkEventArgs__Fields_DEFINED
struct Object;
struct DoWorkEventArgs__Fields {
    struct CancelEventArgs__Fields _;
    struct Object* result;
    struct Object* argument;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DoWorkEventArgs__Fields_FWDDECL)
#define IL2CPP_STRUCT_DoWorkEventArgs__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_DoWorkEventArgs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoWorkEventArgs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DoWorkEventArgs__Fields_FWDDECL)
#include <Modloader/app/structs/DoWorkEventArgs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DoWorkEventArgs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
