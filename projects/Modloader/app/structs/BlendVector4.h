#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlendVector4_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlendVector4_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendVector4_DEFINED)
#include <Modloader/app/structs/BlendVector4__Fields.h>
#if defined(IL2CPP_STRUCT_BlendVector4__Fields_DEFINED)
#define IL2CPP_STRUCT_BlendVector4_DEFINED
struct BlendVector4__Class;
struct BlendVector4 {
    struct BlendVector4__Class* klass;
    MonitorData* monitor;
    struct BlendVector4__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlendVector4_FWDDECL)
#define IL2CPP_STRUCT_BlendVector4_FWDDECL
#include <Modloader/app/structs/BlendVector4__Class.h>
#endif
#undef IL2CPP_STRUCT_BlendVector4_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendVector4_DEFINED) && !defined(IL2CPP_STRUCT_BlendVector4_FWDDECL)
#include <Modloader/app/structs/BlendVector4.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlendVector4.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
