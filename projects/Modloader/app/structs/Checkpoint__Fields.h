#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Checkpoint__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Checkpoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Checkpoint__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_Checkpoint__Fields_DEFINED
struct Condition_1;
struct Checkpoint__Fields {
    struct MonoBehaviour__Fields _;
    struct Condition_1* Condition;
    struct Vector2 RespawnPosition;
    bool m_shouldAcceptRecievers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Checkpoint__Fields_FWDDECL)
#define IL2CPP_STRUCT_Checkpoint__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#endif
#undef IL2CPP_STRUCT_Checkpoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Checkpoint__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Checkpoint__Fields_FWDDECL)
#include <Modloader/app/structs/Checkpoint__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Checkpoint__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
