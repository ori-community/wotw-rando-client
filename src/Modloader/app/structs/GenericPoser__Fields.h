#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericPoser__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericPoser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericPoser__Fields_DEFINED)
#include <Modloader/app/structs/Poser__Fields.h>
#if defined(IL2CPP_STRUCT_Poser__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericPoser__Fields_DEFINED
struct GenericPoser_Map__Array;
struct GenericPoser__Fields {
    struct Poser__Fields _;
    struct GenericPoser_Map__Array* maps;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericPoser__Fields_FWDDECL)
#define IL2CPP_STRUCT_GenericPoser__Fields_FWDDECL
#include <Modloader/app/structs/GenericPoser_Map__Array.h>
#endif
#undef IL2CPP_STRUCT_GenericPoser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericPoser__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GenericPoser__Fields_FWDDECL)
#include <Modloader/app/structs/GenericPoser__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericPoser__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
