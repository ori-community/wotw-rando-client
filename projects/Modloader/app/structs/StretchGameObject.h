#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StretchGameObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StretchGameObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_StretchGameObject_DEFINED)
#include <Modloader/app/structs/StretchGameObject__Fields.h>
#if defined(IL2CPP_STRUCT_StretchGameObject__Fields_DEFINED)
#define IL2CPP_STRUCT_StretchGameObject_DEFINED
struct StretchGameObject__Class;
struct StretchGameObject {
    struct StretchGameObject__Class* klass;
    MonitorData* monitor;
    struct StretchGameObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StretchGameObject_FWDDECL)
#define IL2CPP_STRUCT_StretchGameObject_FWDDECL
#include <Modloader/app/structs/StretchGameObject__Class.h>
#endif
#undef IL2CPP_STRUCT_StretchGameObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_StretchGameObject_DEFINED) && !defined(IL2CPP_STRUCT_StretchGameObject_FWDDECL)
#include <Modloader/app/structs/StretchGameObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StretchGameObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
