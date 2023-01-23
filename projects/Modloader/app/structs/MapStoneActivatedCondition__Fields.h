#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MapStoneActivatedCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MapStoneActivatedCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapStoneActivatedCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition_1__Fields.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED)
#define IL2CPP_STRUCT_MapStoneActivatedCondition__Fields_DEFINED
struct MapStone;
struct MapStoneActivatedCondition__Fields {
    struct Condition_1__Fields _;
    struct MapStone* MapStone;
    bool Activated;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MapStoneActivatedCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_MapStoneActivatedCondition__Fields_FWDDECL
#include <Modloader/app/structs/MapStone.h>
#endif
#undef IL2CPP_STRUCT_MapStoneActivatedCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MapStoneActivatedCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MapStoneActivatedCondition__Fields_FWDDECL)
#include <Modloader/app/structs/MapStoneActivatedCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MapStoneActivatedCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
