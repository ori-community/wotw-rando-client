#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorAttribute_DEFINED)
#include <Modloader/app/structs/ColorAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_ColorAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_ColorAttribute_DEFINED
struct ColorAttribute__Class;
struct ColorAttribute {
    struct ColorAttribute__Class* klass;
    MonitorData* monitor;
    struct ColorAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColorAttribute_FWDDECL)
#define IL2CPP_STRUCT_ColorAttribute_FWDDECL
#include <Modloader/app/structs/ColorAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ColorAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ColorAttribute_FWDDECL)
#include <Modloader/app/structs/ColorAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
