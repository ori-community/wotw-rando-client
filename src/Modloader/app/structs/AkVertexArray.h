#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkVertexArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkVertexArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkVertexArray_DEFINED)
#include <Modloader/app/structs/AkVertexArray__Fields.h>
#if defined(IL2CPP_STRUCT_AkVertexArray__Fields_DEFINED)
#define IL2CPP_STRUCT_AkVertexArray_DEFINED
struct AkVertexArray__Class;
struct AkVertexArray {
    struct AkVertexArray__Class* klass;
    MonitorData* monitor;
    struct AkVertexArray__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkVertexArray_FWDDECL)
#define IL2CPP_STRUCT_AkVertexArray_FWDDECL
#include <Modloader/app/structs/AkVertexArray__Class.h>
#endif
#undef IL2CPP_STRUCT_AkVertexArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkVertexArray_DEFINED) && !defined(IL2CPP_STRUCT_AkVertexArray_FWDDECL)
#include <Modloader/app/structs/AkVertexArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkVertexArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
