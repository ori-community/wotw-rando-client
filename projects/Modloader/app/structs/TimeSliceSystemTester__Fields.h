#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSliceSystemTester__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSliceSystemTester__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSliceSystemTester__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeSliceSystemTester__Fields_DEFINED
struct MoonReference_1_ITestNotifier_;
struct ITestNotifier;
struct TimesliceJobTracker;
struct TimeSliceSystemTester__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_ITestNotifier_* TestEndNotifier;
    struct ITestNotifier* m_notifier;
    struct TimesliceJobTracker* m_tracker;
    bool m_shouldShowMessage;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeSliceSystemTester__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimeSliceSystemTester__Fields_FWDDECL
#include <Modloader/app/structs/ITestNotifier.h>
#include <Modloader/app/structs/MoonReference_1_ITestNotifier_.h>
#include <Modloader/app/structs/TimesliceJobTracker.h>
#endif
#undef IL2CPP_STRUCT_TimeSliceSystemTester__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSliceSystemTester__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimeSliceSystemTester__Fields_FWDDECL)
#include <Modloader/app/structs/TimeSliceSystemTester__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSliceSystemTester__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
