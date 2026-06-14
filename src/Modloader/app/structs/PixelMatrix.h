#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PixelMatrix_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PixelMatrix_INITIALIZING
#if !defined(IL2CPP_STRUCT_PixelMatrix_DEFINED)
#include <Modloader/app/structs/PixelMatrix__Fields.h>
#if defined(IL2CPP_STRUCT_PixelMatrix__Fields_DEFINED)
#define IL2CPP_STRUCT_PixelMatrix_DEFINED
struct PixelMatrix__Class;
struct PixelMatrix {
    struct PixelMatrix__Class* klass;
    MonitorData* monitor;
    struct PixelMatrix__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PixelMatrix_FWDDECL)
#define IL2CPP_STRUCT_PixelMatrix_FWDDECL
#include <Modloader/app/structs/PixelMatrix__Class.h>
#endif
#undef IL2CPP_STRUCT_PixelMatrix_INITIALIZING
#if !defined(IL2CPP_STRUCT_PixelMatrix_DEFINED) && !defined(IL2CPP_STRUCT_PixelMatrix_FWDDECL)
#include <Modloader/app/structs/PixelMatrix.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PixelMatrix.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
