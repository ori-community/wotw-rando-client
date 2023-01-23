#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinComboMoves_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinComboMoves_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinComboMoves_DEFINED)
#include <Modloader/app/structs/SeinComboMoves__Fields.h>
#if defined(IL2CPP_STRUCT_SeinComboMoves__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinComboMoves_DEFINED
struct SeinComboMoves__Class;
struct SeinComboMoves {
    struct SeinComboMoves__Class* klass;
    MonitorData* monitor;
    struct SeinComboMoves__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinComboMoves_FWDDECL)
#define IL2CPP_STRUCT_SeinComboMoves_FWDDECL
#include <Modloader/app/structs/SeinComboMoves__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinComboMoves_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinComboMoves_DEFINED) && !defined(IL2CPP_STRUCT_SeinComboMoves_FWDDECL)
#include <Modloader/app/structs/SeinComboMoves.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinComboMoves.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
