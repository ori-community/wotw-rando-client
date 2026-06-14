#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Link__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Link__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Link__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_Link__Fields_DEFINED
struct Segment_1;
struct Link__Fields {
    struct MonoBehaviour__Fields _;
    struct Segment_1* From;
    struct Segment_1* To;
    struct Vector3 Start;
    struct Vector3 End;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Link__Fields_FWDDECL)
#define IL2CPP_STRUCT_Link__Fields_FWDDECL
#include <Modloader/app/structs/Segment_1.h>
#endif
#undef IL2CPP_STRUCT_Link__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Link__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Link__Fields_FWDDECL)
#include <Modloader/app/structs/Link__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Link__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
