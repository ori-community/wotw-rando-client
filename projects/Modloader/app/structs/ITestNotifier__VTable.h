#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITestNotifier__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITestNotifier__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITestNotifier__VTable_DEFINED)
#define IL2CPP_STRUCT_ITestNotifier__VTable_DEFINED
struct ITestNotifier__VTable {
    VirtualInvokeData get_OnTestSetupBegin;
    VirtualInvokeData set_OnTestSetupBegin;
    VirtualInvokeData get_OnTestStarted;
    VirtualInvokeData set_OnTestStarted;
    VirtualInvokeData get_OnTestFinished;
    VirtualInvokeData set_OnTestFinished;
    VirtualInvokeData GetTestID;
};
#endif
#if !defined(IL2CPP_STRUCT_ITestNotifier__VTable_FWDDECL)
#define IL2CPP_STRUCT_ITestNotifier__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_ITestNotifier__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITestNotifier__VTable_DEFINED) && !defined(IL2CPP_STRUCT_ITestNotifier__VTable_FWDDECL)
#include <Modloader/app/structs/ITestNotifier__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITestNotifier__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
