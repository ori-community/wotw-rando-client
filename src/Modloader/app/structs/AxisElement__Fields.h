#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AxisElement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AxisElement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AxisElement__Fields_DEFINED)
#define IL2CPP_STRUCT_AxisElement__Fields_DEFINED
struct DoubleLinkAxis;
struct __declspec(align(8)) AxisElement__Fields {
    struct DoubleLinkAxis* curNode;
    int32_t rootDepth;
    int32_t curDepth;
    bool isMatch;
};
#endif
#if !defined(IL2CPP_STRUCT_AxisElement__Fields_FWDDECL)
#define IL2CPP_STRUCT_AxisElement__Fields_FWDDECL
#include <Modloader/app/structs/DoubleLinkAxis.h>
#endif
#undef IL2CPP_STRUCT_AxisElement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AxisElement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AxisElement__Fields_FWDDECL)
#include <Modloader/app/structs/AxisElement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AxisElement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
