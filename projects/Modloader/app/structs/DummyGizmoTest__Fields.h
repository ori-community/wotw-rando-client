#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DummyGizmoTest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DummyGizmoTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DummyGizmoTest__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_DummyGizmoTest__Fields_DEFINED
struct Point_1;
struct AxisAlignedBox;
struct DummyGizmoTest__Fields {
    struct MonoBehaviour__Fields _;
    struct Point_1* Target;
    struct AxisAlignedBox* Zone;
    struct AxisAlignedBox* Zone2;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DummyGizmoTest__Fields_FWDDECL)
#define IL2CPP_STRUCT_DummyGizmoTest__Fields_FWDDECL
#include <Modloader/app/structs/AxisAlignedBox.h>
#include <Modloader/app/structs/Point_1.h>
#endif
#undef IL2CPP_STRUCT_DummyGizmoTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DummyGizmoTest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DummyGizmoTest__Fields_FWDDECL)
#include <Modloader/app/structs/DummyGizmoTest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DummyGizmoTest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
