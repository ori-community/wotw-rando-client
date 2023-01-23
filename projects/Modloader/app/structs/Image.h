#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Image_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Image_INITIALIZING
#if !defined(IL2CPP_STRUCT_Image_DEFINED)
#include <Modloader/app/structs/Image__Fields.h>
#if defined(IL2CPP_STRUCT_Image__Fields_DEFINED)
#define IL2CPP_STRUCT_Image_DEFINED
struct Image__Class;
struct Image {
    struct Image__Class* klass;
    MonitorData* monitor;
    struct Image__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Image_FWDDECL)
#define IL2CPP_STRUCT_Image_FWDDECL
#include <Modloader/app/structs/Image__Class.h>
#endif
#undef IL2CPP_STRUCT_Image_INITIALIZING
#if !defined(IL2CPP_STRUCT_Image_DEFINED) && !defined(IL2CPP_STRUCT_Image_FWDDECL)
#include <Modloader/app/structs/Image.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Image.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
