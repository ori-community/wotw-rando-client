#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerBreakablePhysicalSetup_BreakablePhysicalSetupData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerBreakablePhysicalSetup_BreakablePhysicalSetupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerBreakablePhysicalSetup_BreakablePhysicalSetupData_DEFINED)
#define IL2CPP_STRUCT_ServerBreakablePhysicalSetup_BreakablePhysicalSetupData_DEFINED
struct String;
struct List_1_System_Int32_;
struct ServerBreakablePhysicalSetup_BreakablePhysicalSetupData {
    struct String* BaseData;
    struct List_1_System_Int32_* BreakableJointsObjsIDs;
    int32_t OnBreakActionID;
    int32_t ManualBreakPointPositionID;
};
#endif
#if !defined(IL2CPP_STRUCT_ServerBreakablePhysicalSetup_BreakablePhysicalSetupData_FWDDECL)
#define IL2CPP_STRUCT_ServerBreakablePhysicalSetup_BreakablePhysicalSetupData_FWDDECL
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ServerBreakablePhysicalSetup_BreakablePhysicalSetupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerBreakablePhysicalSetup_BreakablePhysicalSetupData_DEFINED) && !defined(IL2CPP_STRUCT_ServerBreakablePhysicalSetup_BreakablePhysicalSetupData_FWDDECL)
#include <Modloader/app/structs/ServerBreakablePhysicalSetup_BreakablePhysicalSetupData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerBreakablePhysicalSetup_BreakablePhysicalSetupData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
