#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RectTransform_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RectTransform_INITIALIZING
#if !defined(IL2CPP_STRUCT_RectTransform_DEFINED)
#include <Modloader/app/structs/RectTransform__Fields.h>
#if defined(IL2CPP_STRUCT_RectTransform__Fields_DEFINED)
#define IL2CPP_STRUCT_RectTransform_DEFINED
struct RectTransform__Class;
struct RectTransform {
    struct RectTransform__Class* klass;
    MonitorData* monitor;
    struct RectTransform__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RectTransform_FWDDECL)
#define IL2CPP_STRUCT_RectTransform_FWDDECL
#include <Modloader/app/structs/RectTransform__Class.h>
#endif
#undef IL2CPP_STRUCT_RectTransform_INITIALIZING
#if !defined(IL2CPP_STRUCT_RectTransform_DEFINED) && !defined(IL2CPP_STRUCT_RectTransform_FWDDECL)
#include <Modloader/app/structs/RectTransform.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RectTransform.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
