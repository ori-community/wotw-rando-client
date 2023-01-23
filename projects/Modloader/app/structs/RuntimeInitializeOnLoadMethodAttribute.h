#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeInitializeOnLoadMethodAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeInitializeOnLoadMethodAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeInitializeOnLoadMethodAttribute_DEFINED)
#include <Modloader/app/structs/RuntimeInitializeOnLoadMethodAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_RuntimeInitializeOnLoadMethodAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeInitializeOnLoadMethodAttribute_DEFINED
struct RuntimeInitializeOnLoadMethodAttribute__Class;
struct RuntimeInitializeOnLoadMethodAttribute {
    struct RuntimeInitializeOnLoadMethodAttribute__Class* klass;
    MonitorData* monitor;
    struct RuntimeInitializeOnLoadMethodAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeInitializeOnLoadMethodAttribute_FWDDECL)
#define IL2CPP_STRUCT_RuntimeInitializeOnLoadMethodAttribute_FWDDECL
#include <Modloader/app/structs/RuntimeInitializeOnLoadMethodAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeInitializeOnLoadMethodAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeInitializeOnLoadMethodAttribute_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeInitializeOnLoadMethodAttribute_FWDDECL)
#include <Modloader/app/structs/RuntimeInitializeOnLoadMethodAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeInitializeOnLoadMethodAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
