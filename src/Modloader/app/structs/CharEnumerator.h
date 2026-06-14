#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharEnumerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharEnumerator_DEFINED)
#include <Modloader/app/structs/CharEnumerator__Fields.h>
#if defined(IL2CPP_STRUCT_CharEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_CharEnumerator_DEFINED
struct CharEnumerator__Class;
struct CharEnumerator {
    struct CharEnumerator__Class* klass;
    MonitorData* monitor;
    struct CharEnumerator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharEnumerator_FWDDECL)
#define IL2CPP_STRUCT_CharEnumerator_FWDDECL
#include <Modloader/app/structs/CharEnumerator__Class.h>
#endif
#undef IL2CPP_STRUCT_CharEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharEnumerator_DEFINED) && !defined(IL2CPP_STRUCT_CharEnumerator_FWDDECL)
#include <Modloader/app/structs/CharEnumerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharEnumerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
