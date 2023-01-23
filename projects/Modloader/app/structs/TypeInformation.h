#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeInformation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeInformation_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeInformation_DEFINED)
#include <Modloader/app/structs/TypeInformation__Fields.h>
#if defined(IL2CPP_STRUCT_TypeInformation__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeInformation_DEFINED
struct TypeInformation__Class;
struct TypeInformation {
    struct TypeInformation__Class* klass;
    MonitorData* monitor;
    struct TypeInformation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeInformation_FWDDECL)
#define IL2CPP_STRUCT_TypeInformation_FWDDECL
#include <Modloader/app/structs/TypeInformation__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeInformation_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeInformation_DEFINED) && !defined(IL2CPP_STRUCT_TypeInformation_FWDDECL)
#include <Modloader/app/structs/TypeInformation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeInformation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
