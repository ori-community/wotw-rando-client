#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DoubleLinkAxis__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DoubleLinkAxis__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoubleLinkAxis__Fields_DEFINED)
#include <Modloader/app/structs/Axis__Fields.h>
#if defined(IL2CPP_STRUCT_Axis__Fields_DEFINED)
#define IL2CPP_STRUCT_DoubleLinkAxis__Fields_DEFINED
struct Axis;
struct DoubleLinkAxis__Fields {
    struct Axis__Fields _;
    struct Axis* next;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DoubleLinkAxis__Fields_FWDDECL)
#define IL2CPP_STRUCT_DoubleLinkAxis__Fields_FWDDECL
#include <Modloader/app/structs/Axis.h>
#endif
#undef IL2CPP_STRUCT_DoubleLinkAxis__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoubleLinkAxis__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DoubleLinkAxis__Fields_FWDDECL)
#include <Modloader/app/structs/DoubleLinkAxis__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DoubleLinkAxis__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
