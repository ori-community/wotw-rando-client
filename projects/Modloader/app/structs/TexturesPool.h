#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TexturesPool_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TexturesPool_INITIALIZING
#if !defined(IL2CPP_STRUCT_TexturesPool_DEFINED)
#include <Modloader/app/structs/TexturesPool__Fields.h>
#if defined(IL2CPP_STRUCT_TexturesPool__Fields_DEFINED)
#define IL2CPP_STRUCT_TexturesPool_DEFINED
struct TexturesPool__Class;
struct TexturesPool {
    struct TexturesPool__Class* klass;
    MonitorData* monitor;
    struct TexturesPool__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TexturesPool_FWDDECL)
#define IL2CPP_STRUCT_TexturesPool_FWDDECL
#include <Modloader/app/structs/TexturesPool__Class.h>
#endif
#undef IL2CPP_STRUCT_TexturesPool_INITIALIZING
#if !defined(IL2CPP_STRUCT_TexturesPool_DEFINED) && !defined(IL2CPP_STRUCT_TexturesPool_FWDDECL)
#include <Modloader/app/structs/TexturesPool.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TexturesPool.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
