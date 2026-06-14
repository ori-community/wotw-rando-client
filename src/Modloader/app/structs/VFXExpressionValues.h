#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VFXExpressionValues_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VFXExpressionValues_INITIALIZING
#if !defined(IL2CPP_STRUCT_VFXExpressionValues_DEFINED)
#include <Modloader/app/structs/VFXExpressionValues__Fields.h>
#if defined(IL2CPP_STRUCT_VFXExpressionValues__Fields_DEFINED)
#define IL2CPP_STRUCT_VFXExpressionValues_DEFINED
struct VFXExpressionValues__Class;
struct VFXExpressionValues {
    struct VFXExpressionValues__Class* klass;
    MonitorData* monitor;
    struct VFXExpressionValues__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VFXExpressionValues_FWDDECL)
#define IL2CPP_STRUCT_VFXExpressionValues_FWDDECL
#include <Modloader/app/structs/VFXExpressionValues__Class.h>
#endif
#undef IL2CPP_STRUCT_VFXExpressionValues_INITIALIZING
#if !defined(IL2CPP_STRUCT_VFXExpressionValues_DEFINED) && !defined(IL2CPP_STRUCT_VFXExpressionValues_FWDDECL)
#include <Modloader/app/structs/VFXExpressionValues.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VFXExpressionValues.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
