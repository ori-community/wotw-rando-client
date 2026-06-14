#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Texture2DArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Texture2DArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_Texture2DArray_DEFINED)
#include <Modloader/app/structs/Texture2DArray__Fields.h>
#if defined(IL2CPP_STRUCT_Texture2DArray__Fields_DEFINED)
#define IL2CPP_STRUCT_Texture2DArray_DEFINED
struct Texture2DArray__Class;
struct Texture2DArray {
    struct Texture2DArray__Class* klass;
    MonitorData* monitor;
    struct Texture2DArray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Texture2DArray_FWDDECL)
#define IL2CPP_STRUCT_Texture2DArray_FWDDECL
#include <Modloader/app/structs/Texture2DArray__Class.h>
#endif
#undef IL2CPP_STRUCT_Texture2DArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_Texture2DArray_DEFINED) && !defined(IL2CPP_STRUCT_Texture2DArray_FWDDECL)
#include <Modloader/app/structs/Texture2DArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Texture2DArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
