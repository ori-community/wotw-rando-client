#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BackgroundWorker.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/DoWorkEventHandler.h>
#include <Modloader/app/structs/DoWorkEventArgs.h>
#include <Modloader/app/structs/RunWorkerCompletedEventArgs.h>
#include <Modloader/app/structs/ProgressChangedEventArgs.h>
#include <Modloader/app/structs/ProgressChangedEventHandler.h>
#include <Modloader/app/structs/RunWorkerCompletedEventHandler.h>

namespace app::classes::System::ComponentModel::BackgroundWorker {
    IL2CPP_REGISTER_METHOD(0x024A2970, void, ctor, (app::BackgroundWorker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024A2C90, void, AsyncOperationCompleted, (app::BackgroundWorker * this_ptr, app::Object* arg))
    IL2CPP_REGISTER_METHODINFO(0x0478F9C0, BackgroundWorker_AsyncOperationCompleted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F5DF50, bool, get_CancellationPending, (app::BackgroundWorker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024A2D80, void, CancelAsync, (app::BackgroundWorker * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476E668, BackgroundWorker_CancelAsync__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x024A2E50, void, add_DoWork, (app::BackgroundWorker * this_ptr, app::DoWorkEventHandler* value))
    IL2CPP_REGISTER_METHOD(0x024A2F30, void, remove_DoWork, (app::BackgroundWorker * this_ptr, app::DoWorkEventHandler* value))
    IL2CPP_REGISTER_METHOD(0x024A3040, bool, get_IsBusy, (app::BackgroundWorker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024A3050, void, OnDoWork, (app::BackgroundWorker * this_ptr, app::DoWorkEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x024A3160, void, OnRunWorkerCompleted, (app::BackgroundWorker * this_ptr, app::RunWorkerCompletedEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x024A3280, void, OnProgressChanged, (app::BackgroundWorker * this_ptr, app::ProgressChangedEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x024A33A0, void, add_ProgressChanged, (app::BackgroundWorker * this_ptr, app::ProgressChangedEventHandler* value))
    IL2CPP_REGISTER_METHOD(0x024A3480, void, remove_ProgressChanged, (app::BackgroundWorker * this_ptr, app::ProgressChangedEventHandler* value))
    IL2CPP_REGISTER_METHOD(0x024A3590, void, ProgressReporter, (app::BackgroundWorker * this_ptr, app::Object* arg))
    IL2CPP_REGISTER_METHODINFO(0x04737760, BackgroundWorker_ProgressReporter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x024A3680, void, ReportProgress_1, (app::BackgroundWorker * this_ptr, int32_t percent_progress))
    IL2CPP_REGISTER_METHOD(0x024A3690, void, ReportProgress_2, (app::BackgroundWorker * this_ptr, int32_t percent_progress, app::Object* user_state))
    IL2CPP_REGISTER_METHODINFO(0x04780BA0, BackgroundWorker_ReportProgress_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x024A3870, void, RunWorkerAsync_1, (app::BackgroundWorker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024A3970, void, RunWorkerAsync_2, (app::BackgroundWorker * this_ptr, app::Object* argument))
    IL2CPP_REGISTER_METHODINFO(0x04791FD8, BackgroundWorker_RunWorkerAsync_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x024A3A80, void, add_RunWorkerCompleted, (app::BackgroundWorker * this_ptr, app::RunWorkerCompletedEventHandler* value))
    IL2CPP_REGISTER_METHOD(0x024A3B60, void, remove_RunWorkerCompleted, (app::BackgroundWorker * this_ptr, app::RunWorkerCompletedEventHandler* value))
    IL2CPP_REGISTER_METHOD(0x00F5DF30, bool, get_WorkerReportsProgress, (app::BackgroundWorker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5DF40, void, set_WorkerReportsProgress, (app::BackgroundWorker * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_WorkerSupportsCancellation, (app::BackgroundWorker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CF0, void, set_WorkerSupportsCancellation, (app::BackgroundWorker * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x024A3C70, void, WorkerThreadStart, (app::BackgroundWorker * this_ptr, app::Object* argument))
    IL2CPP_REGISTER_METHODINFO(0x0470EEA8, BackgroundWorker_WorkerThreadStart__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x024A3FC0, void, cctor, ())
} // namespace app::classes::System::ComponentModel::BackgroundWorker
