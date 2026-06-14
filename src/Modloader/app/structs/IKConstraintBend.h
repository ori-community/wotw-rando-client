#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKConstraintBend_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKConstraintBend_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKConstraintBend_DEFINED)
#include <Modloader/app/structs/IKConstraintBend__Fields.h>
#if defined(IL2CPP_STRUCT_IKConstraintBend__Fields_DEFINED)
#define IL2CPP_STRUCT_IKConstraintBend_DEFINED
struct IKConstraintBend__Class;
struct IKConstraintBend {
    struct IKConstraintBend__Class* klass;
    MonitorData* monitor;
    struct IKConstraintBend__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKConstraintBend_FWDDECL)
#define IL2CPP_STRUCT_IKConstraintBend_FWDDECL
#include <Modloader/app/structs/IKConstraintBend__Class.h>
#endif
#undef IL2CPP_STRUCT_IKConstraintBend_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKConstraintBend_DEFINED) && !defined(IL2CPP_STRUCT_IKConstraintBend_FWDDECL)
#include <Modloader/app/structs/IKConstraintBend.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKConstraintBend.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
