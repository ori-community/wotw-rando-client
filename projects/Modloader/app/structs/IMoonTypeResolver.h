#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMoonTypeResolver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMoonTypeResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonTypeResolver_DEFINED)
#define IL2CPP_STRUCT_IMoonTypeResolver_DEFINED
struct IMoonTypeResolver__Class;
struct IMoonTypeResolver {
    struct IMoonTypeResolver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMoonTypeResolver_FWDDECL)
#define IL2CPP_STRUCT_IMoonTypeResolver_FWDDECL
#include <Modloader/app/structs/IMoonTypeResolver__Class.h>
#endif
#undef IL2CPP_STRUCT_IMoonTypeResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonTypeResolver_DEFINED) && !defined(IL2CPP_STRUCT_IMoonTypeResolver_FWDDECL)
#include <Modloader/app/structs/IMoonTypeResolver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMoonTypeResolver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
