#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMoonTypeEditableResolver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMoonTypeEditableResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonTypeEditableResolver_DEFINED)
#define IL2CPP_STRUCT_IMoonTypeEditableResolver_DEFINED
struct IMoonTypeEditableResolver__Class;
struct IMoonTypeEditableResolver {
    struct IMoonTypeEditableResolver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMoonTypeEditableResolver_FWDDECL)
#define IL2CPP_STRUCT_IMoonTypeEditableResolver_FWDDECL
#include <Modloader/app/structs/IMoonTypeEditableResolver__Class.h>
#endif
#undef IL2CPP_STRUCT_IMoonTypeEditableResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonTypeEditableResolver_DEFINED) && !defined(IL2CPP_STRUCT_IMoonTypeEditableResolver_FWDDECL)
#include <Modloader/app/structs/IMoonTypeEditableResolver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMoonTypeEditableResolver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
