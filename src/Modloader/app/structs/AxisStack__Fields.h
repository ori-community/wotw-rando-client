#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AxisStack__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AxisStack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AxisStack__Fields_DEFINED)
#define IL2CPP_STRUCT_AxisStack__Fields_DEFINED
struct ArrayList;
struct ForwardAxis;
struct ActiveAxis;
struct __declspec(align(8)) AxisStack__Fields {
    struct ArrayList* stack;
    struct ForwardAxis* subtree;
    struct ActiveAxis* parent;
};
#endif
#if !defined(IL2CPP_STRUCT_AxisStack__Fields_FWDDECL)
#define IL2CPP_STRUCT_AxisStack__Fields_FWDDECL
#include <Modloader/app/structs/ActiveAxis.h>
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/ForwardAxis.h>
#endif
#undef IL2CPP_STRUCT_AxisStack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AxisStack__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AxisStack__Fields_FWDDECL)
#include <Modloader/app/structs/AxisStack__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AxisStack__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
