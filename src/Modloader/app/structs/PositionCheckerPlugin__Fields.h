#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PositionCheckerPlugin__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PositionCheckerPlugin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionCheckerPlugin__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_PositionCheckerPlugin__Fields_DEFINED
struct List_1_System_Int32_;
struct PositionCheckerPlugin__Fields {
    struct MonoBehaviour__Fields _;
    int32_t m_autoFixFrameCount;
    struct Vector2 m_scroll;
    struct List_1_System_Int32_* m_frameErrors;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PositionCheckerPlugin__Fields_FWDDECL)
#define IL2CPP_STRUCT_PositionCheckerPlugin__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Int32_.h>
#endif
#undef IL2CPP_STRUCT_PositionCheckerPlugin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionCheckerPlugin__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PositionCheckerPlugin__Fields_FWDDECL)
#include <Modloader/app/structs/PositionCheckerPlugin__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PositionCheckerPlugin__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
