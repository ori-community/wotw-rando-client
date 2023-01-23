#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoBehaviour_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoBehaviour_DEFINED
struct MonoBehaviour__Class;
struct MonoBehaviour {
    struct MonoBehaviour__Class* klass;
    MonitorData* monitor;
    struct MonoBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoBehaviour_FWDDECL)
#define IL2CPP_STRUCT_MonoBehaviour_FWDDECL
#include <Modloader/app/structs/MonoBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_MonoBehaviour_FWDDECL)
#include <Modloader/app/structs/MonoBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
