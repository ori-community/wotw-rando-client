#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocatedActiveAxis__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocatedActiveAxis__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocatedActiveAxis__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAxis__Fields.h>
#if defined(IL2CPP_STRUCT_ActiveAxis__Fields_DEFINED)
#define IL2CPP_STRUCT_LocatedActiveAxis__Fields_DEFINED
struct KeySequence;
struct LocatedActiveAxis__Fields {
    struct ActiveAxis__Fields _;
    int32_t column;
    bool isMatched;
    struct KeySequence* Ks;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocatedActiveAxis__Fields_FWDDECL)
#define IL2CPP_STRUCT_LocatedActiveAxis__Fields_FWDDECL
#include <Modloader/app/structs/KeySequence.h>
#endif
#undef IL2CPP_STRUCT_LocatedActiveAxis__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocatedActiveAxis__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LocatedActiveAxis__Fields_FWDDECL)
#include <Modloader/app/structs/LocatedActiveAxis__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocatedActiveAxis__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
