#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DesignOnlyAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DesignOnlyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesignOnlyAttribute_DEFINED)
#include <Modloader/app/structs/DesignOnlyAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DesignOnlyAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DesignOnlyAttribute_DEFINED
struct DesignOnlyAttribute__Class;
struct DesignOnlyAttribute {
    struct DesignOnlyAttribute__Class* klass;
    MonitorData* monitor;
    struct DesignOnlyAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DesignOnlyAttribute_FWDDECL)
#define IL2CPP_STRUCT_DesignOnlyAttribute_FWDDECL
#include <Modloader/app/structs/DesignOnlyAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DesignOnlyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesignOnlyAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DesignOnlyAttribute_FWDDECL)
#include <Modloader/app/structs/DesignOnlyAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DesignOnlyAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
