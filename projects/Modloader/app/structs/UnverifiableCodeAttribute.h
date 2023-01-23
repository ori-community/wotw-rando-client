#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnverifiableCodeAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnverifiableCodeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnverifiableCodeAttribute_DEFINED)
#define IL2CPP_STRUCT_UnverifiableCodeAttribute_DEFINED
struct UnverifiableCodeAttribute__Class;
struct UnverifiableCodeAttribute {
    struct UnverifiableCodeAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UnverifiableCodeAttribute_FWDDECL)
#define IL2CPP_STRUCT_UnverifiableCodeAttribute_FWDDECL
#include <Modloader/app/structs/UnverifiableCodeAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_UnverifiableCodeAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnverifiableCodeAttribute_DEFINED) && !defined(IL2CPP_STRUCT_UnverifiableCodeAttribute_FWDDECL)
#include <Modloader/app/structs/UnverifiableCodeAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnverifiableCodeAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
