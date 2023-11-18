#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SmoothLinesPlugin_NodeMetaData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SmoothLinesPlugin_NodeMetaData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmoothLinesPlugin_NodeMetaData__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SmoothLinesPlugin_NodeMetaData__Fields_DEFINED
struct __declspec(align(8)) SmoothLinesPlugin_NodeMetaData__Fields {
    struct Vector3 TangentIn;
    struct Vector3 TangentOut;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SmoothLinesPlugin_NodeMetaData__Fields_FWDDECL)
#define IL2CPP_STRUCT_SmoothLinesPlugin_NodeMetaData__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SmoothLinesPlugin_NodeMetaData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmoothLinesPlugin_NodeMetaData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SmoothLinesPlugin_NodeMetaData__Fields_FWDDECL)
#include <Modloader/app/structs/SmoothLinesPlugin_NodeMetaData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SmoothLinesPlugin_NodeMetaData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
